NAME  = countsig
SRC = 	countsig.c 
OBJ = $(SRC:.c=.o)
CFLAGS += -W -Wall -pedantic -ansi -I/u/all/sundas_c/rendu/lib/my/
LIB = -L/u/all/sundas_c/rendu/lib/my -lmy
RM = rm -f
CC = gcc

$(NAME) : $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

all : $(NAME) 

clean : 
	$(RM) $(OBJ)
	$(RM) *~
fclean : clean
	$(RM) $(NAME)
	
re : fclean all