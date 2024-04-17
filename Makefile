NAME = libftprintf.a
HEADER = ft_printf.h

SRC = ft_putchar.c ft_putnbr.c ft_putstr.c ft_printf.c \
    ft_puthexa.c ft_putptr.c
AR = ar
OBJ = $(SRC:.c=.o)
CC = gcc

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
