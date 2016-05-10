#include "quizz.h"

int	get_this_part(const char *part, const int file)
{
  char	*str;

  while ((str = get_next_line(file)))
    {
      if (my_strcmp(str, part) == 1)
	{
	  free(str);
	  return (1);
	}
      free(str);
    }
  return (0);
}

int	how_many_questions(const int fd)
{
  int	nb;

  nb = 0;
  get_this_part("[Answers]", fd);
  while ((str = get_next_line(file)))
    {
      nb++;
      free(str);
    }
  return (nb);
}
