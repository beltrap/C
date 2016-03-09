/*
** my_strncpy.c for my_strncpy in /home/paul/Jour03/beltra_p/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Wed Oct 21 20:07:12 2015 BELTRAN Paul
** Last update Wed Oct 28 13:04:34 2015 BELTRAN Paul
*/

char	*my_strncpy(char *dest, char *src, int n);

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;
  int	pos;

  for (i = 0; src[i] != '\0' && i < n; i++)
    {
      dest[i] = src[i];
    }
  pos = i;
  while (src[pos] == '\0' && dest[i] != '\0')
    {
      dest[i] = 0;
      i++;
    }
  return (dest);
}
