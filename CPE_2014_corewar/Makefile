##
## Makefile for sudoki in /home/girard_s/rendu/sudoki-bi
## 
## Made by Nicolas Girardot
## Login   <girard_s@epitech.net>
## 
## Started on  Sat Mar  1 10:43:43 2014 Nicolas Girardot
## Last update Thu Apr 10 15:39:21 2014 mancel_a
## Last update Fri Apr  4 14:06:04 2014 valeri
##

CC	=	cc -g

RM	=	rm -f

SRC	=	assembleur/sources/asm.c \
		assembleur/sources/main.c \
		assembleur/sources/basics.c \
		assembleur/sources/my.c	\
		assembleur/sources/get_next_line.c \
		assembleur/sources/verif.c\
		assembleur/sources/parsing.c\
		assembleur/sources/test_system.c\
		assembleur/sources/list_d/my_put_in_list_first.c \
		assembleur/sources/list_d/my_put_in_list_last.c\

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
