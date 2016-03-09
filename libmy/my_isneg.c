/*
** my_isneg.c for my_isneg_c in /home/beltra_p/Jour01C/beltra_p
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Mon Oct 19 15:09:01 2015 BELTRAN Paul
** Last update Sat Oct 24 16:31:35 2015 BELTRAN Paul
*/

int	my_isneg(int n)
{
  int	value_return;

  value_return = 0;
  if (n >= 0)
    {
      value_return = 1;
    }
  return value_return;
}
