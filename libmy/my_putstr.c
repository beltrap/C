/*
** my_putstr.c for my_putstr in /home/paul/Jour03/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Tue Oct 20 04:14:22 2015 BELTRAN Paul
** Last update Sat Oct 24 16:35:33 2015 BELTRAN Paul
*/

#include <unistd.h>

void	my_putstr(char *str)
{
  int	i;
  char	*p;
  
  for (i = 0; *(str + i) != '\0'; i++)
      {
	p = str + i;
	write(1, p, 1);
      }
}
