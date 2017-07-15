/*
** my.h for  in /home/WASSEX/Semestre1/CPE_2016_BSQ/include
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Sat Apr 29 22:35:49 2017 Wassim Alkayar
** Last update Sat Jul 15 21:30:01 2017 Wassim Alkayar
*/

#ifndef MY_H_
# define MY_H_
# define USAGE_ERR	"Usage : ./bsq [filename]\n"
# define MEM_ERR	"Memory allocation failed\n"
# define DIR_ERR	"The first argument should be a file, not a directory.\n"
# define FILE_ERR	"Open file error.\n"

# include "struct.h"

void	my_putchar(char c);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_put_nbr(int nb);
char	*my_strdup(char *src);

int	convertnb(char *str);
char	*complete_map(char *map);
int	*complete_tab(char *map);
char	*delete_back_slashn(char *map);
int	*malloc_and_verifie_tab(int *tab, int nb);
char	*malloc_and_verifie(char *str, int nb);
void	print_biggest_square(struct s_Properties properties,
			     char *map, int posmax, int max);
int	line_length(char *mapbuff, int begin);
int	get_min(int *tab, struct s_Properties properties, int ct);
int	search_biggest_square(int *tab);
void	find_head(char *map, int *tab, struct s_Properties properties);
void	first_check(char *map);

void	usage_error();
void	malloc_error();
void	dir_error();
void	file_opening_error();

#endif /* !MY_H_ */
