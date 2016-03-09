/*
** my_verif.c for my_verif in /home/beltra_p/DEVC/Piscine/chifumi/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Fri Oct 30 09:16:42 2015 BELTRAN Paul
** Last update Sat Oct 31 17:00:21 2015 BELTRAN Paul
*/

#include "my_list.h"

int     my_strcmp(char *s1, char *s2);
int	my_getnbr(char *str);
void	my_putstr(char *str);
char	*my_strlowcase(char *str);
int	chifumi_to_int(char *str);
char	*readLine();
void	my_put_nbr(int nbr);

int	my_verif_arg(int argc, char **argv, int *type)
{
  if (argc != 5)
    return (1);
  if (my_strcmp(argv[1], "--version") != 0 || my_strcmp(argv[3], "--duree") != 0)
    {
      if (my_strcmp(argv[3], "--version") != 0 || my_strcmp(argv[1], "--duree") != 0)
	return (2);
    }
  if (my_strcmp(argv[2], "classique") != 0 && my_strcmp(argv[2], "expert") != 0)
    {
      if (my_strcmp(argv[4], "classique") != 0 && my_strcmp(argv[4], "expert") != 0)
	return (3);
    }
  if (my_getnbr(argv[2]) <= 0)
    {
      if (my_getnbr(argv[4]) <= 0)
	return (4);
    }
  if ((my_getnbr(argv[2]) % 2) == 0)
    {
      if ((my_getnbr(argv[4]) % 2) == 0)
	return (5);
    }
  if (my_strcmp(argv[2], "classique") != 0)
    if(my_strcmp(argv[4], "classique") != 0)
      *type = 20;
  return (0);
}

char	*my_verif_opt(int jeu)
{
  char	*str;

  if ((jeu / 10) == 1)
    {
      do
        {
          my_putstr("Votre entrée -> ");
          str = my_strlowcase(readLine());
          if (chifumi_to_int(str) == 0)
            my_putstr("Va t'acheter des doigts\n");
        }while (chifumi_to_int(str) == 0 || chifumi_to_int(str) > 3);
    }
  else
    {
      do
        {
          my_putstr("Votre entrée -> ");
          str = my_strlowcase(readLine());
	  if (chifumi_to_int(str) == 0)
            my_putstr("Va t'acheter des doigts\n");
        }while (chifumi_to_int(str) == 0);
    }
  return (str);
}

int	my_verif_tab(int *tab, t_list *list, int *score)
{
  int	i;
  int	j;
  int	victoire;
  t_list *temp;

  victoire = 0;
  temp = list;
  i = chifumi_to_int(temp -> player);
  j = chifumi_to_int(temp -> computer);
  if ((tab[i -1] % 10) == j || (tab[i - 1] / 10) == j)
    {
      *score = *score + 10;
      victoire = 1;
    }
  if ((tab[j -1] % 10)== i ||(tab[j - 1] / 10) == i)
    {
      *score = *score + 1;
      victoire = 2;
    }
  return (victoire);
}
