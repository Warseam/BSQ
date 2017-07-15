##
## Makefile for  in /home/Wasx/CPool_Day12
## 
## Made by Wassim ALKAYAR
## Login   <Wasx@epitech.net>
## 
## Started on  Wed Mar 15 10:16:14 2017 Wassim ALKAYAR
## Last update Wed May 10 10:53:05 2017 Wassim Alkayar
##

NAME	=	bsq

SRC	=	main.c				\
		src/error.c			\
		src/firstcheck.c		\
		src/my_putchar.c		\
		src/my_putstr.c			\
		src/my_strlen.c			\
		src/malloc_and_verifie.c	\
		src/convertnb.c			\
		src/utils1.c			\
		src/complete_map_1.c		\
		src/complete_tab.c			

CFLAGS	+=	-Wall -Wextra -I./include

OBJ	=	$(SRC:.c=.o)

GCC	=	gcc -o

RM	=	rm -f

ASUPR2	=	bsq

all: $(NAME)

$(NAME): $(OBJ)
	$(GCC) $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(ASUPR2)

re:	fclean all

.PHONY: all clean fclean re
