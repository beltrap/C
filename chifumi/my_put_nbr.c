/*
** my_put_nbr.c for my_put_nbr in /home/beltra_p/libmy_01/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Sat Oct 24 16:20:51 2015 BELTRAN Paul
** Last update Fri Oct 30 11:10:18 2015 BELTRAN Paul
*/

void	my_putchar(char c);

void	my_aff_value(int n, int neg, char *tab, int pos)
{
  int	i;

  if (neg == 1)
    {
      if ((n % 10) < 0)
	{
	  tab[pos] = ((n % 10) * -1) + 48;
	}
      else
	{
	  tab[pos] = (n % 10) + 49;
	}
    }
  else
    {
      tab[pos] = (n % 10) + 48;
    }
  for (i = pos; i >= 0; i--)
    my_putchar(tab[i]);
}

void	my_aff_nbr(int n, int neg)
{
  int	i;
  char	tab[42];

  for (i = 0; (n / 10) != 0; i++)
    {
      if ((n % 10) < 0)
	{
	  tab[i] = ((n % 10) * -1) + 48;
	}
      else
	{
	  tab[i] = (n % 10) + 48;
	}
      n = n / 10;
    }
  my_aff_value(n, neg, tab, i);
}

void	my_put_nbr(int n)
{  
  int	neg_zero;

  neg_zero = 0;
  if (n < 0)
    {
      if (n < -10)
	neg_zero = 1;
      my_putchar('-');
      n = n * (-1);
    }
  my_aff_nbr(n, neg_zero);
}
