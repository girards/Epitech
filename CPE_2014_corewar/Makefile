##
## Makefile for sudoki in /home/girard_s/rendu/sudoki-bi
## 
## Made by Nicolas Girardot
## Login   <girard_s@epitech.net>
## 
## Started on  Sat Mar  1 10:43:43 2014 Nicolas Girardot
## Last update Sat Apr  5 16:14:34 2014 Nicolas Girardot
## Last update Fri Apr  4 14:06:04 2014 valeri
##

CC	=	cc -g

RM	=	rm -f

SRC	=	assembleur/sources/asm.c \
		assembleur/sources/basics.c \
		assembleur/sources/get_next_line.c \
		assembleur/sources/my_printf.c\
		assembleur/sources/my_printf_func.c\
		assembleur/sources/my_strcmp.c\
		assembleur/sources/my_put_nbr.c\
		assembleur/sources/my_strncmp.c\
		assembleur/sources/verif.c\
		assembleur/sources/my_strcat.c			\
		assembleur/sources/xmalloc.c			\
		assembleur/sources/test_system.c\
		assembleur/sources/list_d/my_put_in_list_first.c \
		assembleur/sources/list_d/my_put_in_list_last.c\
		assembleur/sources/list_d/my_show_list.c\

OBJ	=	$(SRC:.c=.o)

FLAGS	=	-W -Wall -Wextra -pedantic -ansi -Werror


NAME	=	./asm


$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY:	all clean fclean re
