##
## Makefile for sudoki in /home/girard_s/rendu/sudoki-bi
## 
## Made by Nicolas Girardot
## Login   <girard_s@epitech.net>
## 
## Started on  Sat Mar  1 10:43:43 2014 Nicolas Girardot
## Last update Mon Mar 31 13:15:50 2014 Nicolas Girardot
##

CC	=	cc -g

RM	=	rm -f

SRC	=	assembleur/sources/asm.c \
		assembleur/sources/basics.c \
		assembleur/sources/get_next_line.c \
		assembleur/sources/my_strncmp.c\
		assembleur/sources/test_system.c\

OBJ	=	$(SRC:.c=.o)

FLAGS	=	-W -Wall -Wextra -pedantic -ansi -Werror


NAME	=	./asm


$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(FLAGS)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY:	all clean fclean re
