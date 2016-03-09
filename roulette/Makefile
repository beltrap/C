##
## Makefile for Makefile in /home/beltra_p/DEVC/Piscine/Roulette/beltra_p/roulette
## 
## Made by BELTRAN Paul
## Login   <beltra_p@etna-alternance.net>
## 
## Started on  Sat Oct 31 17:25:39 2015 BELTRAN Paul
## Last update Tue Jan  5 16:27:17 2016 BELTRAN Paul
##

CC	= gcc
NAME	= roulette
SRC	= jeu.c			\
	  interface.c		\
	  my_getnbr.c		\
	  my_put_nbr.c		\
	  my_putstr.c		\
	  readline.c		\
	  main.c
OBJ	= $(SRC:%.c=%.o)
RM	= rm -f
CFLAGS 	= -W -Werror -Wall

$(NAME):
		$(CC) -c $(CFLAGS) $(SRC)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all
