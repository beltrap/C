/*
** my_getnbr.c for my_getnbr in /home/beltra_p/libmy_01/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Sat Oct 24 16:18:40 2015 BELTRAN Paul
** Last update Wed Oct 28 13:21:23 2015 BELTRAN Paul
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
      if ((str[i] < '0' && str[i] > '9') && (str[i] != '-'))
	return (value_return);
      if (str[i] == '-')
	neg++;
      if (str[i] > 47 && str[i] < 58)
	value_return = (value_return * 10) + str[i] - 48;
      if((neg % 2) != 0)
	value_return = value_return * -1;
      i++;
    }
  return (value_return);
}
