/*
** my_error.c for my_error in /home/beltra_p/DEVC/Piscine/chifumi/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Fri Oct 30 09:49:23 2015 BELTRAN Paul
** Last update Fri Oct 30 14:02:15 2015 BELTRAN Paul
*/

void	my_putstr(char *str);

void	my_error_arg(int error)
{
  if (error == 1)
    my_putstr("Erreur : il doit y avoir 4 arguments  !!!\n");
  if (error == 2)
    {
      my_putstr("Erreur : Mauvais argument\n./chifumi --version");
      my_putstr(" classique/expert --duree nbDuree\n");
    }
  if (error == 3)
    {
      my_putstr("Erreur : type du jeu incorrect\n");
      my_putstr("--version [classique/expert]\n");
    }
  if (error == 4)
    {
      my_putstr("Erreur : --duree inferieur ou egal à 0\n");
      my_putstr("Entrez un chiffre supérieur à 0 !!!!\n");
    }
  if (error == 5)
    {
      my_putstr("Erreur : duree pair\n");
      my_putstr("Entrez un chiffre impair\n");
    }
}
