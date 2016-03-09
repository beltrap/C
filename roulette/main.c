/*
** main.c for main in /home/beltra_p/la_roulette/beltra_p/roulette
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Sat Oct 24 10:14:34 2015 BELTRAN Paul
** Last update Sat Oct 24 13:08:13 2015 BELTRAN Paul
*/

#include <stdlib.h>

void	aff_miser(int *mise, int gain);
int	aff_num();
void    aff_resultat(int random, int gain, int num);
void    aff_gain(int gain);
char    *aff_choix_joueur();
int     game(int nb, int mise, int *gain);
void	my_putstr(char *str);
char	*readLine();

int	main()
{
  int	mise;
  int	gain;
  int	random;
  int	num;
  char	*choose;

  system("clear");
  gain = 200;
  my_putstr("Voulez vous jouer ?(y/n) ");
  choose = readLine();
  while ((*choose == 'y') && (gain > 0))
    {
      my_putstr("\n");
      aff_gain(gain);
      aff_miser(&mise, gain);
      num = aff_num();
      random = game(num, mise, &gain);
      aff_resultat(random, gain, num);
      if (gain != 0)
	choose = aff_choix_joueur();
    }
  my_putstr("Partie terminé\nMerci d'avoir joué\n");
  return (0);
};
