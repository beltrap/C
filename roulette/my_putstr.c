/*
** my_putstr.c for my_putstr in /home/beltra_p/la_roulette/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Sat Oct 24 09:56:03 2015 BELTRAN Paul
** Last update Sat Oct 24 10:19:34 2015 BELTRAN Paul
*/

#include <unistd.h>

void	my_putstr(char *str)
{
  int	i;
  
  for (i = 0; *(str + i) != '\0'; i++)
    {
      write(1, (str + i), 1);
    }
}
