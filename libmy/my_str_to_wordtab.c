/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/beltra_p/DEVC/Jour07/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Mon Oct 26 11:49:14 2015 BELTRAN Paul
** Last update Sat Oct 31 18:08:05 2015 BELTRAN Paul
*/

#include <stdlib.h>

char	*my_strdup(char *str);

int	char_spe(char c)
{
  int	value_return;

  value_return = 1;
  if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
    {
      if (!(c >= '0' && c <= '9'))
	{
	  value_return = 0;
	}
    }
  return (value_return);
}

int	nb_word(char *str)
{
  int	nb;
  int	i;

  nb = 0;
  for (i = 0; str[i] != '\0'; i++)
    {
      if (char_spe(str[i -1]) != 0 && char_spe(str[i]) == 0)
	{
	  if (char_spe(str[i]) == 0)
	    nb++;
	}
    }
  return (nb + 1);
}

int	len_word(int pos, char *str)
{
  int	i;
  int	size;

  i = 0;
  size = 0;
  while (char_spe(str[i + pos]) != 0)
    {
      size++;
      i++;
    }
  return (size);
}

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	nb;
  int	i;
  int	j;
  int	size;

  size = j = i = 0;
  nb = nb_word(str);
  tab = (char **)malloc(sizeof(char *) * nb);
  while (nb > 0 && str[i] != '\0')
    {
      while (char_spe(str[i]) != 1)
	i++;
      tab[j] = my_strdup(str + i);
      size = len_word(i, str);
      tab[j][size] = '\0';
      j++;
      nb--;
      i = i + size + 1;
    }
  return (tab);
}
