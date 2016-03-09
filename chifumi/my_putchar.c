/*
** my_putchar.c for my_putchar in /home/paul/repertoire_rendu/Jour01C/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Mon Oct 19 10:37:47 2015 BELTRAN Paul
** Last update Sat Oct 24 16:28:47 2015 BELTRAN Paul
*/

#include <unistd.h>

void	 my_putchar(char c)
{
	 write(1, &c, 1);
}
