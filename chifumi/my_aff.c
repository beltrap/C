/*
** my_aff.c for my_aff in /home/beltra_p/DEVC/Piscine/chifumi/beltra_p/chifumi
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Fri Oct 30 10:07:27 2015 BELTRAN Paul
** Last update Sat Oct 31 16:28:12 2015 BELTRAN Paul
*/

#include "my_list.h"

void		my_putstr(char *str);
int		my_strcmp(char *s1, char *s2);
char		*readLine();
int		chifumi_to_int(char *str);
char		*my_strlowcase(char str[]);
char		*int_to_chifumi(int num);
char		*my_verif_opt(int jeu);
void		my_put_nbr(int nbr);
int		my_verif_tab(int *tab, t_list *list, int *score);

int		my_aff_init (char **argv)
{
  int		value_return;

  value_return = 0;
  my_putstr("Votre partie est prête\n ");
  my_putstr("version: ");
  if (my_strcmp(argv[1], "--version") == 0)
    {
      my_putstr(argv[2]);
    }
  else
    {
      my_putstr(argv[4]);
      value_return = 1;
    }
  my_putstr("\n besft of: ");
  if (my_strcmp(argv[3], "--duree") == 0)
    {   
      my_putstr(argv[4]);
    }
  else
    {
      my_putstr(argv[2]);
    }
  my_putstr("\n");
  return (value_return);
}

void		my_aff_select(t_list *list, int jeu)
{
  char		*str;
  t_list	*temp;

  str = my_verif_opt(jeu);
  temp = list;
  while (temp -> player != 0)
    temp = temp -> next;
  temp -> player = (void *)int_to_chifumi(chifumi_to_int(str));
}

void		my_aff(t_list *list, int score, int victoire)
{
  my_putstr(list -> player);
  my_putstr(" vs ");
  my_putstr(list -> computer);
  if (victoire == 1)
    {
      my_putstr("\nVous gagnez une manche\n");
    }
  else if (victoire == 2)
    {
      my_putstr("\nVous avez perdu la manche\n");
    }
  else
    {
      my_putstr("\nEgalité\n");
    }
  my_putstr("Vous ");
  my_put_nbr((score / 10));
  my_putstr(" - ");
  my_put_nbr((score % 10));
  my_putstr(" Computer\n");
}

int		my_aff_result(t_list *list, int *tab, int score)
{
  t_list	*temp;
  int		victoire;
  t_list	*temp_prev;

  temp = list;
  victoire = 0;
  while (temp -> player != 0)
    {
      temp_prev = temp;
      temp = temp -> next;
    }
  victoire = my_verif_tab(tab, temp_prev, &score);
  my_aff(temp_prev, score, victoire);
  return (score);
}
