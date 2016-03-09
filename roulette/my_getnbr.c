/*
** my_getnbr.c for my_getnbr in /home/beltra_p/la_roulette/beltra_p/roulette
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Sat Oct 24 10:08:10 2015 BELTRAN Paul
** Last update Sat Oct 24 10:09:09 2015 BELTRAN Paul
*/

int	my_getnbr(char * str)
{
  int	i;
  int	neg;
  int	value_return;
  int	exit;

  i = 0;
  exit = 0;
  neg = 0;
  value_return = 0;
  while (str[i] != '\0' && exit == 0)
    {
      if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
	exit = 1;
      if (str[i] == '-')
	neg++;
      if (str[i] > 47 && str[i] < 58)
	value_return = (value_return * 10) + str[i] - 48;
      i++;
    }
  if((neg % 2) != 0)
    value_return = value_return * -1;
  return (value_return);
}
