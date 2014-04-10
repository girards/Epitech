/*
** asm.h for corewar in /home/mancel_a/Epitech/Epitech/CPE_2014_corewar/assembleur/headers
** 
** Made by mancel_a
** Login   <mancel_a@epitech.net>
** 
** Started on  Thu Apr 10 15:56:51 2014 mancel_a
** Last update Thu Apr 10 15:56:52 2014 mancel_a
*/

#ifndef ASM_H_
# define ASM_H_

typedef struct	s_cmd
{
  char		*instruction;
  char		**param;
}		t_cmd;

typedef struct	s_champ
{
  char		*filename;
  char		*name;
  char		*comment;
  char		*command;
  t_cmd		cmd;
}		t_champ;

int		go_lenght(char *line);
char		*get_go(char *line, int lenght);
t_champ		parse(t_champ champs);
int		check_content(t_champ champ);
t_champ         fill_champ(int fd, t_champ champ, char *file);
t_champ         init_champ();
int             is_name(char *line);
char            *cat_str(char *s1, char *s2);
int             is_comment(char *line);

#endif
