/*
** my_list.h for my_list in /home/beltra_p/DEVC/Piscine/chifumi/beltra_p/chifumi
** 
** Made by BELTRAN Paul
** Login   <beltra_p@etna-alternance.net>
** 
** Started on  Fri Oct 30 11:42:22 2015 BELTRAN Paul
** Last update Sat Oct 31 15:04:23 2015 BELTRAN Paul
*/

#ifndef __MY_LIST_H__
#define __MY_LIST_H__
typedef struct		s_list
{
  void			*computer;
  void			*player;
  struct s_list		*next;
}			t_list;
#endif
