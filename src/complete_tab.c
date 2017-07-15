/*
** delete_backslashn.c for  in /home/WASSEX/Semestre1/CPE_2016_BSQ
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Wed May  3 23:43:49 2017 Wassim Alkayar
** Last update Sat May 13 00:13:29 2017 Wassim Alkayar
*/

#include <stdlib.h>
#include "my.h"

int	*complete_tab(char *map)
{
  int	*replace;
  int	i;

  i = 0;
  replace = NULL;
  replace = malloc_and_verifie_tab(replace, my_strlen(map) + 1);
  while (map[i] != '\0')
    {
      if (map[i] == '.')
	replace[i] = 1;
      else if (map[i] == 'o' || map[i] == '\n')
	replace[i] = 0;
      i = i + 1;
    }
  replace[i] = -1;
  return (replace);
}
