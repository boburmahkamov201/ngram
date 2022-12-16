TARGET = my_ngram
CC = gcc
CFLAGS =  -Wall -Wextra -Werror
OBJ = my_ngram.o 
SRC = my_ngram.c 


.PHONY : all clean fclean re 

all : $(TARGET)

$(TARGET) : $(OBJ)
	gcc $(CFLAGS) -o $(TARGET) $(OBJ) 

$(OBJ) : $(SRC)
	gcc $(CFLAGS) -c $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all