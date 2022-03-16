BONUS_SRCS = 
SRCS = ./srcs/ft_printf.c ./srcs/ft_putnbr_modif.c ./srcs/ft_putstr_modif.c ./srcs/ft_hexa_modif.c ./srcs/ft_putchar_modif.c\
./srcs/ft_putnbr_u_modif.c
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I includes
NAME = libftprintf.a

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar -rcs $@ $^

all: $(NAME)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

bonus:
	make SRCS="$(SRCS) $(BONUS_SRCS)"

re: fclean all

.PHONY: all clean fclean bonus re
