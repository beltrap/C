/*
** my_convert.c for my_convert in /home/beltra_p/DEVC/Piscine/chifumi/beltra_p/chifumi
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Fri Oct 30 12:29:18 2015 BELTRAN Paul
** Last update Sat Oct 31 16:55:14 2015 BELTRAN Paul
*/

int	my_strcmp(char *s1, char *s2);

char	*int_to_chifumi(int num)
{
  if (num == 1)
    return ("Ciseaux");
  if (num == 2)
    return ("Feuille");
  if (num == 3)
    return ("Pierre");
  if (num == 4)
    return ("Lézard");
  if (num == 5)
    return ("Spock");
  return ("null");
}

int	chifumi_to_int(char *str)
{
  if (my_strcmp(str, "ciseaux") == 0 || my_strcmp(str, "Ciseaux") == 0)
    return (1);
  if (my_strcmp(str, "feuille") == 0 || my_strcmp(str, "Feuille") == 0)
    return (2);
  if (my_strcmp(str, "pierre") == 0 || my_strcmp(str, "Pierre") == 0)
    return (3);
  if (my_strcmp(str, "lézard") == 0 || my_strcmp(str, "Lézard") == 0)
    return (4);
  if (my_strcmp(str, "spock") == 0 || my_strcmp(str, "Spock") == 0)
    return (5);
  if (my_strcmp(str, "quit") == 0 || my_strcmp(str, "Quit") == 0)
    return (6);
  return (0);
}
