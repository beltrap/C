/*
** my_strcmp.c for my_strcmp in /home/paul/Jour03/beltra_p/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Wed Oct 21 20:29:18 2015 BELTRAN Paul
** Last update Tue Oct 27 11:22:01 2015 BELTRAN Paul
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	value_return;

  i = 0;
  value_return = 0;
  while ((s1[i] != '\0' || s2[i] != '\0') && (value_return == 0))
    {
      if (s1[i] > s2[i])
	{
	  value_return = 1;
	}
      if (s1[i] < s2[i])
	{
	  value_return = -1;
	}
      i++;
    }
  return (value_return);
}
