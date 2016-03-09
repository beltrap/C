/*
** my_game.c for game in /home/beltra_p/DEVC/Piscine/chifumi/beltra_p/chifumi
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Fri Oct 30 13:49:26 2015 BELTRAN Paul
** Last update Sat Oct 31 17:40:42 2015 BELTRAN Paul
*/

#include "my_list.h"
#include <stdlib.h>
#include <time.h>

t_list			*my_list_create(int duree, int *alea);
int			my_strcmp(char *s1, char *s2);
void			my_putstr(char *str);
void			my_aff_select(t_list *list, int jeu);
int			my_aff_result(t_list *list, int *tab, int score);
void			my_put_nbr(int nbr);
char			*readLine();

t_list			*my_game_init_class(int duree, char *str)
{
  int			*alea;
  int			i;
  t_list		*list;

  alea = malloc(sizeof(int *) * duree + 5);
  srand (time (NULL));
  list = 0;
  for (i = 0; i < duree + 5; i++)
    {
      if (my_strcmp(str, "classique") == 0)
	{
	  alea[i] = rand()% 3 + 1;
	}
      else
	{
	  alea[i] = rand()% 5 + 1;
	}
    }
  list = my_list_create(duree + 5, alea);
  free(alea);
  return (list);
}

void			my_historique(t_list *list, int score)
{
  t_list		*temp;

  temp = list;
  my_putstr("Historique :\n");
  while (temp != 0 && temp -> player != 0)
    {
      my_putstr(temp -> player);
      my_putstr(" vs ");
      my_putstr(temp -> computer);
      my_putstr("\n");
      temp = temp -> next;
    }
  my_putstr("\nScore : \nVous ");
  my_put_nbr(score / 10);
  my_putstr(" - ");
  my_put_nbr(score % 10);
  my_putstr(" Computer\n");
}

void			my_game(t_list *list, int duree, int jeu)
{
  static int		tab[5] = { 24, 35, 41, 52, 13 };
  int			i;
  t_list		*temp;
  char			*str;
  int			score;
  int			score_prev;

  temp = list;
  score = 0;
  for (i = 0; i < duree; i++)
    {
      my_aff_select(temp, jeu);
      score_prev = score;
      score = my_aff_result(temp, tab, score);
      if (score_prev == score)
	i--;
      my_putstr("\nVoulez vous continuer ?(yes/no) ");
      str = readLine();
      if (my_strcmp(str, "no") ==0)
	i = duree;
      my_historique(temp, score);
    }
  if ((score / 10) > (score % 10))
    my_putstr("Partie terminé !!!!\nVictoire Player !!!\n");
  if ((score / 10) < (score % 10))
    my_putstr("Partie terminé !!!\nVictoire Computer !!!\n");
}
