NAME = libftprintf.a

SRCS = ft_printf.c  \
	   print_char.c  \
	   print_string.c \
	   print_int.c     \
	   print_up_hexa.c  \
	   print_lw_hexa.c	 \
	   print_unsigned_int.c \
	   print_address.c


OBJS = $(srcs:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = cc

AR = ar rcs

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean re
