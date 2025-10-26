#Makefile
NAME = sokoban

SRCS = main.c \
    afficherTab.c \
	initTab.c \
	trouver.c \
	reponses.c \
	deplacement.c \
	positions.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
