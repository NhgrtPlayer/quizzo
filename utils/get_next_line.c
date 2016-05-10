#include <stdlib.h>
#include <unistd.h>

/*
** get_next_line allows you to return the next line of a file descriptor.
** Replaces the last '\n' by a '\0'.
** It can read the standard input if you pass 0 to it.
*/

char	*my_realloc_plus_1_into_copy(char *str)
{
  char	*new_str;
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  if ((new_str = malloc(sizeof(char) * (i + 1))) == NULL)
    return (NULL);
  i = 0;
  while (str[i] != '\0')
    {
      new_str[i] = str[i];
      i++;
      new_str[i] = str[i];
    }
  return (new_str);
}

char	*get_next_line(const int fd)
{
  char	*ret;
  char	c;
  int	i;
  int	ok;

  c = 0;
  if ((i = 0) || fd < 0 || (ret = malloc(sizeof(char))) == NULL)
    return (NULL);
  while (c != '\n')
    {
      if ((ok = read(fd, &c, 1)) < 0 || (ok == 0 && c == '\0'))
	return (NULL);
      else if (ok == 0 && c != '\0')
	return (ret);
      if (c != '\n')
	{
	  ret[i] = c;
	  if ((ret = my_realloc_plus_1_into_copy(ret)) == NULL)
	    return (NULL);
	}
      else
	ret[i] = '\0';
      i++;
    }
  return (ret);
}
