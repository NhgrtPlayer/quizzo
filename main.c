#include "quizz.h"

int	load_language_dtb(const lang language)
{
  int	fd;

  if (language == ENGLISH)
    {
      if ((fd = open(BDD_EN_PATH, O_RDONLY)) < 0)
	return (my_putstr_e(ERR_OPEN_FAILED_EN));
    }
  else if (language == FRENCH)
    {
      if ((fd = open(BDD_FR_PATH, O_RDONLY)) < 0)
	return (my_putstr_e(ERR_OPEN_FAILED_FR));
    }
  return (fd);
}

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
      else
	return (error_disp(av[0], 0));
    }
  else
    return (error_disp(av[0], 0));
  dtb = load_language_dtb(language);
  close(dtb);
  return (0);
}
