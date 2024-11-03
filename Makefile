NAME = libft.a

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) test_program

re: fclean all

test: $(NAME) main.c
	$(CC) $(CFLAGS) -o test_program main.c -L. -lft

.PHONY: all clean fclean re test