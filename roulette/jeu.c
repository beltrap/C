/*
** jeu.c for jeu in /home/beltra_p/la_roulette/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Sat Oct 24 09:34:38 2015 BELTRAN Paul
** Last update Sat Oct 24 11:17:47 2015 BELTRAN Paul
*/

#include <stdlib.h>
#include <time.h>

int	game(int nb, int mise, int *gain)
{
  int	nb_roulette;

  nb_roulette = 0;
  srand (time (NULL));
  nb_roulette = (rand()% 36) + 1;
  if (nb == nb_roulette)
    *gain = *gain + (mise * 3);
  if ((nb % 2) == (nb_roulette % 2))
    {
      *gain = *gain - (mise / 2);
    }
  else
    {
      *gain = *gain - mise; 
    }
  return (nb_roulette);
};
