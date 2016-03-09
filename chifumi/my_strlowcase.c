/*
** my_strlowcase.c for my_strlowcase in /home/beltra_p/DEVC/Piscine/chifumi/beltra_p/chifumi
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Fri Oct 30 16:13:42 2015 BELTRAN Paul
** Last update Sat Oct 31 16:49:23 2015 BELTRAN Paul
*/

char	*my_strlowcase(char *str)
{
  int	i;
   
  for ( i = 0; str[i] != '\0'; i++)
    {
      if( str[i] > 64 && str[i] < 90 )
	{
	  str[i] = str[i] + 32;
	}
    }
  return (str);
}
