/*
** my_strdup.c for my_strdup in /home/beltra_p/DEVC/Jour07/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Mon Oct 26 10:19:13 2015 BELTRAN Paul
** Last update Mon Oct 26 17:45:38 2015 BELTRAN Paul
*/
#include <stdlib.h>

int     my_strlen(char *str);
char    *my_strcpy(char *dest, char *src);

char	*my_strdup(char *str)
{
  char	*tab;

  tab = malloc(my_strlen(str) * sizeof(*tab));
  if (tab != 0)
    my_strcpy(tab, str);
  return (tab);
}
