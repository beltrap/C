/*
** interface.c for interface.c in /home/beltra_p/la_roulette/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Sat Oct 24 09:58:32 2015 BELTRAN Paul
** Last update Sat Oct 24 13:03:01 2015 BELTRAN Paul
*/

#define couleur(param)

void	my_putstr(char *str);
char	*readLine();
int	my_getnbr(char *str);
void	my_put_nbr(int n);

void	aff_miser(int *mise, int gain)
{
  my_putstr("Choisissez votre mise (€): ");
  *mise = my_getnbr(readLine());
  while (*mise > gain || *mise < 1)
    {
      my_putstr("Vous êtes magicien ?\n");
      my_putstr("Choisissez votre mise (€): ");
      *mise = my_getnbr(readLine());
    }
  my_putstr("Vous avez misé (€): ");
  my_put_nbr(*mise);
};

int	aff_num()
{
  int num;

  my_putstr("Choisissez votre numéro : ");
  num = my_getnbr(readLine());
  while (num < 1 || num > 36)
    {
      my_putstr("Choisissez un nombre entre 1 et 36 !!!\n");
      my_putstr("Choisissez votre numéro : ");
      num = my_getnbr(readLine());
    }
  my_putstr("Votre choix est ");
  my_put_nbr(num);
  my_putstr("\n");
  return (num);
};

void	aff_resultat(int random, int gain, int num)
{
  my_putstr("Numéro roulette : ");
  my_put_nbr(random);
  my_putstr("Votre numéro : ");
  my_put_nbr(num);
  my_putstr("Votre gain (€): ");
  my_put_nbr(gain);
  my_putstr("\n");
};

void	aff_gain(int gain)
{
  my_putstr("Votre gain (€): ");
  my_put_nbr(gain);
}

char	*aff_choix_joueur()
{
  int	i;
  char	*choix;

  i = 0;
  my_putstr("Souhaitez vous rejouer ? (y/n) ");
  choix = readLine();
  while ((*choix != 'y') && (*choix != 'n'))
    {
      my_putstr("Choisissez soit y ou n\n");
      my_putstr("Souhaitez vous rejouer ? (y/n) ");
      choix = readLine();
      i++;
      if (i == 3)
	choix[0] = 'n';
    }
  return (choix);
}
