/*
** my_strcpy.c for my_strcpy in /home/paul/Jour03/beltra_p/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Wed Oct 21 19:39:36 2015 BELTRAN Paul
** Last update Sat Oct 24 16:38:06 2015 BELTRAN Paul
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  for (i = 0; src[i] != '\0'; i++)
    {
      dest[i] = src[i];
    }
  dest[i] = '\0';
  return (dest);
}
