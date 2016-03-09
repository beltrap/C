/*
** my_put_nbr.c for my_put_nbr in /home/beltra_p/Jour05/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Fri Oct 23 16:06:12 2015 BELTRAN Paul
** Last update Sat Oct 24 10:13:06 2015 BELTRAN Paul
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
};

void	my_put_nbr(int n)
{
  char	tab[32];
  int	i;

  i = 0;
  if (n < 0)
    {
      my_putchar('-');
      n = n * -1;
    }
  while ((n / 10) != 0)
    {
      tab[i] = (n % 10) + '0';
      n = n / 10;
      i++;
    }
  tab[i] = (n % 10) + '0';
  while (i >= 0)
    {
      my_putchar(tab[i]);
      i--;
    }
  my_putchar('\n');
}
