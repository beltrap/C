/*
** my_maillon.c for my_maillon in /home/beltra_p/DEVC/Piscine/chifumi/beltra_p/chifumi
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Fri Oct 30 11:25:15 2015 BELTRAN Paul
** Last update Sat Oct 31 15:40:07 2015 BELTRAN Paul
*/

#include "my_list.h"
#include <stdlib.h>

char		*int_to_chifumi(int num);

int		create_list(t_list **list, char *data)
{
  t_list	*node;

  node = malloc(sizeof(t_list *));
  if (node == 0)
    return (1);
  node -> computer = (void *)data;
  node -> player = 0;
  node -> next = *list;
  *list = node;
  return (0);
}

t_list		*my_list_create(int duree, int *alea)
{
  int		i;
  t_list	*list;
  int		value_return;

  value_return = 0;
  list = 0;
  for (i = 0; i < duree; i++)
    {
      value_return = create_list(&list, int_to_chifumi(alea[i]));
      if (value_return == 1)
	return (0);
    }
  return (list);
}

void		my_rev_list(t_list **begin)
{
  t_list	*temp;
  t_list	*temp2;
  t_list	*temp_next;

  temp = *begin;
  temp2 = 0;
  while (temp != 0)
    {
      temp_next = temp -> next;
      temp -> next = temp2;
      temp2 = temp;
      temp = temp_next;
    }
  *begin = temp2;
}
