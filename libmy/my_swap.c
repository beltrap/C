/*
** my_swap.c for my_swap in /home/paul/Jour03/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Wed Oct 21 10:43:49 2015 BELTRAN Paul
** Last update Sat Oct 24 16:34:19 2015 BELTRAN Paul
*/

void	my_swap(int *a, int *b)
{
  int	swap;

  swap = *a;
  *a = *b;
  *b = swap;
}
