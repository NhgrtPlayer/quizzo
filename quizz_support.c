#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "quizz.h"

void	my_put_file(const int fd)
{
  char	*str;

  while ((str = get_next_line(fd)))
    {
      my_putstr(str);
      my_putchar('\n');
      free(str);
    }
}

int	need_my_help_question_mark(const lang language)
{
  int	fd;

  if (language == ENGLISH)
    {
      if ((fd = open(HELP_EN_PATH, O_RDONLY)) < 0)
	return (1);
    }
  else if (language == FRENCH)
    {
      if ((fd = open(HELP_FR_PATH, O_RDONLY)) < 0)
	return (1);
    }
  my_put_file(fd);
  close(fd);
  return (0);
}

int	how_many_questions(const int fd)
{
  char	*str;
  int	nb;

  nb = 0;
  while ((str = get_next_line(fd)))
    {
      free(str);
    }
}
