/*
** quizz.h for Quizzo in /home/player/Programmes perso/Quizz
**
** Made by Merwan
** Login   <player@epitech.net>
**
** Started on  Mon May  9 18:21:55 2016 Merwan
** Last update Tue May 10 11:48:20 2016 Merwan Lara
*/

#ifndef _QUIZZ_H_
# define _QUIZZ_H_

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include "utils.h"

 /*
 ** ERROR MESSAGES
 */
# define ERR_OPEN_FAILED_EN "Error : dtb-en.txt couldn't be opened.\n"
# define ERR_OPEN_FAILED_FR "Erreur : dtb-fr.txt n'a pas pû être ouvert.\n"

 /*
 ** MODES
 ** See dtb-en.txt for more details
 */
# define SA 1 /* Single Answer Question */
# define MCQ 2 /* Multiple Choice Question */
# define APP 3 /* Approximation */

 /*
 ** LANGUAGE
 */
 enum lang
  {
    ENGLISH,
    FRENCH
  };

 /*
 ** RELATIVES PATHS FOR THE DATABASES AND THE HELP FILES
 ** TODO: Make them not relative
 */
# define BDD_EN_PATH "databases/dtb-en.txt"
# define BDD_FR_PATH "databases/dtb-fr.txt"
# define HELP_EN_PATH "help/help-en.txt"
# define HELP_FR_PATH "help/help-fr.txt"

int	need_my_help_question_mark(const lang);

#endif /* !QUIZZ_H */
