/*
** firstcheck.c for  in /home/WASSEX/Semestre1/Cprog-Elem/CPE_2016_BSQ/src
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Tue May  9 22:18:41 2017 Wassim Alkayar
** Last update Sat May 13 00:16:07 2017 Wassim Alkayar
*/

#include <stdlib.h>
#include "my.h"

void	first_check(char *map)
{
  int	i;
  char	c;

  c = 'o';
  i = 0;
  while (map[i + 1] != '\0')
    {
      if (map[i] == c || map[i] == '\n')
	i = i + 1;
      else
	return ;
    }
  my_putstr(map);
  exit(1);
}
