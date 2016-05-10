/*
** main.c for Quizzo in /home/player/Programmes perso/Quizzo/
**
** Made by Merwan Lara
** Login   <lara_m@epitech.net>
**
** Started on  Tue May 10 11:20:14 2016 Merwan Lara
** Last update Tue May 10 11:20:32 2016 Merwan Lara
*/


#include "quizz.h"

int	main(int ac, char **av)
{
  lang	language;
  int	dtb;

  if (ac == 2)
    {
      if (my_strcmp(av[1], "-h") == 1 || my_strcmp(av[1], "--help") == 1)
	return (need_my_help_question_mark(language));
      else if (my_strcmp(av[1], "en") == 1)
	language = ENGLISH;
      else if (my_strcmp(av[1], "fr") == 1)
	language = FRENCH;
    }
  else
    return (error_disp(av[0], 0));
  if (language == ENGLISH)
    {
      if ((dtb = open(BDD_EN_PATH, O_RDONLY)) < 0)
	return (my_putstr_e(ERR_OPEN_FAILED_EN));
    }
  else if (language == FRENCH)
    {
      if ((dtb = open(BDD_FR_PATH, O_RDONLY)) < 0)
	return (my_putstr_e(ERR_OPEN_FAILED_FR));
    }
  close(dtb);
  return (0);
}
