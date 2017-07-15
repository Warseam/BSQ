/*
** my_atoi.c for  in /home/WASSEX/jungle/pushswapautre/CPE_2016_Pushswap
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Wed Apr 19 01:56:00 2017 Wassim Alkayar
** Last update Sat May 13 00:13:47 2017 Wassim Alkayar
*/

#include <stdlib.h>

int	convertnb(char *str)
{
  int	i;
  int	result;
  int	sign;

  i = 0;
  result = 0;
  sign = 1;
  if (str == NULL)
    return (0);
  if (str[0] == '-')
    {
      sign = -1;
      i = i + 1;
    }
  while (str[i] != '\0')
    {
      result = result * 10 + str[i] - '0';
      i = i + 1;
    }
  return (sign * result);
}
