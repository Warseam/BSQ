/*
** my_putchar.c for  in /home/WASSEX/lib
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Fri Mar 31 17:14:19 2017 Wassim Alkayar
** Last update Sat May 13 00:16:41 2017 Wassim Alkayar
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
