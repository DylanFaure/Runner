##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles libmy
##

SRC	=	src/main.c	\
		src/end_game.c	\
		src/put_last_background.c	\
		src/put_mid_background.c	\
		src/put_first_background.c	\
		src/put_dynorun.c	\
		src/put_spike.c	\
		src/maj1.c	\
		src/maj2.c	\
		src/set_music.c	\
		src/create_images.c	\
		src/create_dynorun.c	\
		src/create_lastbg.c	\
		src/create_midbg.c	\
		src/create_firstbg.c	\
		src/create_spike.c	\
		src/gestion_space.c	\
		src/verif_colision.c

CC	=	gcc

CSFML	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I./include

NAME	=	my_runner

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CSFML)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.phony:	all clean fclean re
