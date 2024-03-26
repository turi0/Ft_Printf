NAME = libftprintf.a
HEADER = ft_printf.h

SOURCES = ft_putchar.c ft_putnbr.c ft_putstr.c ft_printf.c \
	ft_puthexa.c ft_putptr.c

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs libftprintf.a $(OBJECTS)

%.o: %.c $(HEADER)
	${CC} -c $< ${CFLAGS} -o $@


clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}


re: fclean all

.PHONY: all clean fclean re
