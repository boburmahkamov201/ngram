#include <stdio.h>

int my_strlen(char* arr)
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++) count++;
    return count;
}

int letters[127] = {0};

int summ;
int main(int size, char* arr[])
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < my_strlen(arr[i]); j++)
        {
            summ = arr[i][j];
            letters[summ]++;
        }
    }

    for (int i = 0; i < 127; i++)
    {
        if (letters[i] > 0)
        {
            printf("%c:%d\n", i, letters[i]);
        }
    }
    return 0;
}