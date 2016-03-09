/*
** my_strlen.c for my_strlen in /home/paul/Jour03/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Wed Oct 21 09:32:29 2015 BELTRAN Paul
** Last update Tue Oct 27 09:57:51 2015 BELTRAN Paul
*/

int	my_strlen(char *str)
{
  int	i;
  int	size;

  size = 0;
  for (i = 0; *(str + i) != '\0'; i++)
    { 
      size++;
    }
  return (size);
}
