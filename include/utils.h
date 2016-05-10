/*
** Contains prototypes for all utility functions
*/
#ifndef _UTILS_H_
# define _UTILS_H_

 /* my_putchar_putstr.c */
 void	my_putchar(char);
 void	my_putchar_e(char);
 void	my_putstr(char *);
 int	my_putstr_e(char *);
 int	error_disp(char *, int);

 /* get_next_line.c */
 char	*get_next_line(const int);

 /* my_put_nbr.c */
 int	my_put_nbr(int);

 /* my_strcmp.c */
 int	my_strcmp(char *, char *);

#endif /* !UTILS_H_ */
