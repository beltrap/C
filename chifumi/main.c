/*
** main.c for main in /home/beltra_p/DEVC/Piscine/chifumi/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Fri Oct 30 09:57:09 2015 BELTRAN Paul
** Last update Sat Oct 31 17:23:18 2015 BELTRAN Paul
*/

#include "my_list.h"
#include <stdlib.h>

int		my_verif_arg(int argc, char **argv, int *type);
void		my_error_arg(int error);
int		my_aff_init(char **argv);
void		my_putstr(char *str);
int		my_getnbr(char *str);
t_list		*my_game_init_class(int num, char *str);
void		my_put_nbr(int nbr);
void		my_aff_select(t_list *list, int jeu);
void		my_aff_result(t_list *list);
void		my_game(t_list *list, int duree, int jeu);

int		main(int argc, char *argv[])
{
  int		error;
  t_list	*list;
  int		type_jeu;
  
  type_jeu = 10;
  error = my_verif_arg(argc, argv, &type_jeu);
  if (error == 0)
    {
      type_jeu =type_jeu + my_aff_init(argv);
      if ((type_jeu % 10) == 0)
	{
	  list = my_game_init_class(my_getnbr(argv[4]), argv[2]);
	  my_game(list, my_getnbr(argv[4]), type_jeu);
	}
      else
	{
	  list = my_game_init_class(my_getnbr(argv[2]), argv[4]);
	  my_game(list, my_getnbr(argv[2]), type_jeu);
	}
      free(list);
    }
  my_error_arg(error);
  return (0);
}
