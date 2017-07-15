/*
** complete_map_1.c for  in /home/WASSEX/Semestre1/CPE_2016_BSQ
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Wed May  3 23:05:30 2017 Wassim Alkayar
** Last update Sat May 13 00:13:04 2017 Wassim Alkayar
*/

#include <stdlib.h>
#include "struct.h"
#include "my.h"

char	*complete_map(char *map)
{
  int	j;
  int	i;
  char	*replace;

  i = 0;
  j = 0;
  replace = NULL;
  replace = malloc_and_verifie(replace,
			       (my_strlen(map) + 1));
  while (map[i] != '\n')
    i++;
  i = i + 1;
  while (map[i] != '\0')
    {
      replace[j] = map[i];
      i = i + 1;
      j = j + 1;
    }
  free(map);
  replace[j] = '\0';
  return (replace);
}
