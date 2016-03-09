/*
** my_strncat.c for my_strncat in /home/paul/Jour04/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Wed Oct 21 21:50:21 2015 BELTRAN Paul
** Last update Sat Oct 24 16:45:43 2015 BELTRAN Paul
*/

char	*my_strncat(char *str1, char *str2, int n)
{
  int size;
  int i;
  int pos;

  for (size = 0; str1[size] != '\0'; size++);
  pos = size;
  for (i = 0; i < n; i++)
    {
      str1[pos + i] = str2[i];
    }
  str1[pos + i] = '\0';
  return (str1);
}
