/*
** main.c for  in /home/WASSEX/Semestre1/CPE_2016_BSQ
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Sat Apr 29 20:10:01 2017 Wassim Alkayar
** Last update Sat May 13 00:11:56 2017 Wassim Alkayar
*/

#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include "my.h"
#include "struct.h"

void	aff_my_square(char *map)
{
  int	size;

  size = my_strlen(map);
  write(1, map, size);
  free(map);
}

void	print_biggest_square(struct s_Properties properties,
			     char *map, int posmax, int max)
{
  int	i;
  int	j;
  int	h;

  i = 1;
  while (i <= max)
    {
      h = 1;
      j = 0;
      while (h <= max)
	{
	  map[posmax - j] = 'x';
	  j = j + properties.line_length;
	  h = h + 1;
	}
      posmax = posmax - 1;
      i = i + 1;
    }
  aff_my_square(map);
}

void	begin_search(char *map, struct s_Properties properties)
{
  int	*tab;
  int	ct;

  tab = NULL;
  map = complete_map(map);
  first_check(map);
  tab = complete_tab(map);
  if (properties.line_number == 1)
    ct = 0;
  else
    ct = properties.line_length + 1;
  while (tab[ct] != -1)
    {
      if (tab[ct] == 0)
	ct = ct + 1;
      else if (properties.line_number == 1)
	ct = ct + 1;
      else
	{
	  tab[ct] = get_min(tab, properties, ct) + 1;
	  ct = ct + 1;
	}
    }
  find_head(map, tab, properties);
}

void			prepare_begin(char *map)
{
  struct s_Properties	properties;
  int			i;
  char			*line_number;

  line_number = 0;
  i = 0;
  while (map[i] != '\n')
    i = i + 1;
  i = i + 1;
  line_number = malloc_and_verifie(line_number, (i + 1));
  properties.begin = i;
  properties.line_length = line_length(map, i);
  properties.checkpoint = i;
  i = 0;
  while (map[i] != '\n')
    {
      line_number[i] = map[i];
      i = i + 1;
    }
  line_number[i] = '\0';
  properties.line_number = convertnb(line_number);
  free(line_number);
  begin_search(map, properties);
}

int		main(int argc, char **argv)
{
  int		fd;
  int		ret;
  char		*buff;
  struct stat	filestat;
  int		size;
  DIR		*dir;

  buff = NULL;
  if (argc != 2)
    usage_error();
  dir = opendir(argv[1]);
  if (dir != NULL)
    dir_error();
  if (stat(argv[1], &filestat) == -1)
    file_opening_error();
  size = filestat.st_size;
  buff = malloc_and_verifie(buff, (size + 1));
  fd = open(argv[1], O_RDONLY);
  if (fd == -1)
    file_opening_error();
  ret = read(fd, buff, size + 1);
  buff[ret] = '\0';
  prepare_begin(buff);
  return (0);
}
