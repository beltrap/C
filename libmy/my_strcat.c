/*
** my_strcat.c for my_strcat in /home/paul/Jour03/beltra_p/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Wed Oct 21 21:10:42 2015 BELTRAN Paul
** Last update Sat Oct 24 16:45:07 2015 BELTRAN Paul
*/

char	*my_strcat(char *str1, char *str2)
{
  int size;
  int i;
  int pos;

  for (size = 0; str1[size] != '\0'; size++);
  pos = size;
  for (i = 0; str2[i] != '\0'; i++)
    {
      str1[pos + i] = str2[i];
    }
  str1[pos + i] = '\0';
  return (str1);
}
