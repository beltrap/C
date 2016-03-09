/*
** my_strstr.c for my_strstr in /home/paul/Jour04/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Thu Oct 22 16:13:26 2015 BELTRAN Paul
** Last update Sat Oct 31 18:10:06 2015 BELTRAN Paul
*/

char	*my_strstr(char *str, char *to_find)
{
  int	nb_occu;
  int	i;

  nb_occu = 0;
  for (i = 0; str[i] != '\0'; i++)
    {
      if (str[i] == to_find[nb_occu])
	{
	  nb_occu++;
	}
      else
	{
	  nb_occu = 0;
	}
      if (to_find[nb_occu] == '\0')
	{
	  i = i - (nb_occu - 1);
	  return (str + i);
	}
    }
  return ("null");
}
