NAME = libftprintf.a

SRCS = print_char.c print_string.c print_int.c ft_strlen.c print_hexa.c

OBJS = $(srcs:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = cc

AR = ar rcs

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean re
