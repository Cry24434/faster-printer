CC	= 	gcc

RM	= 	rm -rf

SRC	= 	fasterPrinter.c

FLAGS	= 	-W -Wall -Wextra -Werror -pedantic

OBJS	= 	$(SRC:.c=.o)

NAME	= 	fasterPrinter

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(FLAGS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
