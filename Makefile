##
## Makefile for quizzo in /home/player/Programmes perso/Quizz
## 
## Made by Merwan
## Login   <player@epitech.net>
## 
## Started on  Mon May  9 17:57:07 2016 Merwan
## Last update Mon May  9 20:49:16 2016 Merwan
##

CC	= gcc

RM	= rm -f

NAME	= quizzo

SRCS	= main.c \
	  quizz.c \
	  quizz_error.c \
	  quizz_support.c \
	  utils/my_putchar_putstr.c \
	  utils/get_next_line.c \
	  utils/my_put_nbr.c \
	  utils/my_strcmp.c

OBJS	= $(SRCS:.c=.o)

CFLAGS	= -W -Wall -Werror -ansi -pedantic -I include

LDFLAGS	= 

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
