/*
** my_putstr.c for my_putstr in /home/Wasx/CPool_Day04
** 
** Made by Wassim ALKAYAR
** Login   <Wasx@epitech.net>
** 
** Started on  Thu Mar  2 14:03:13 2017 Wassim ALKAYAR
** Last update Sat May 13 00:16:52 2017 Wassim Alkayar
*/

#include <stdlib.h>
#include "my.h"

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (0);
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
