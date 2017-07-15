/*
** utils1.c for  in /home/WASSEX/Semestre1/CPE_2016_BSQ
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Wed May  3 19:12:32 2017 Wassim Alkayar
** Last update Sat Jul 15 21:29:32 2017 Wassim Alkayar
*/

#include <stdlib.h>
#include "struct.h"
#include "my.h"

int	line_length(char *mapbuff, int begin)
{
  int	i;

  i = 0;
  while (mapbuff[begin] != '\n')
    {
      begin = begin + 1;
      i = i + 1;
    }
  i = i + 1;
  return (i);
}

int	get_min(int *tab, struct s_Properties properties, int ct)
{
  int	min;

  min = 0;
  if (tab[ct - properties.line_length - 1])
    min = tab[ct - properties.line_length - 1];
  if (tab[ct - properties.line_length] < min)
    min = tab[ct - properties.line_length];
  if (tab[ct - 1] < min)
    min = tab[ct - 1];
  return (min);
}

int	search_biggest_square(int *tab)
{
  int	i;
  int	max;

  max = 0;
  i = 0;
  while (tab[i] != -1)
    {
      if (tab[i] > max)
	max = tab[i];
      i = i + 1;
    }
  return (max);
}

void	find_head(char *map, int *tab, struct s_Properties properties)
{
  int	max;
  int	posmax;
  int	i;

  max = search_biggest_square(tab);
  i = 0;
  while (tab[i] != max)
    i = i + 1;
  posmax = i;
  free(tab);
  print_biggest_square(properties, map, posmax, max);
}
