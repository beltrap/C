##
## Makefile for Makefile in /home/beltra_p/DEVC/Piscine/chifumi/beltra_p/chifumi
## 
## Made by BELTRAN Paul
## Login   <beltra_p@etna-alternance.net>
## 
## Started on  Sat Oct 31 17:25:39 2015 BELTRAN Paul
## Last update Sat Oct 31 17:35:20 2015 BELTRAN Paul
##

CC	= gcc
NAME	= chifumi
SRC	= my_aff.c		\
	  my_convert.c		\
	  my_error.c		\
	  my_game.c		\
	  my_getnbr.c		\
	  my_maillon.c		\
	  my_put_nbr.c		\
	  my_putchar.c		\
	  my_putstr.c		\
	  my_str_to_wordtab.c	\
	  my_strcmp.c		\
	  my_strcpy.c		\
	  my_strdup.c		\
	  my_strlen.c		\
	  my_strlowcase.c	\
	  my_verif.c		\
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