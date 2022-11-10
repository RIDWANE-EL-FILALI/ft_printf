NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = ft_puthex.c ft_putnbr.c ft_putstr.c ft_printf.c \
	ft_putchar.c ft_putuphex.c ft_putpointer.c ft_putunbr.c ft_strlen.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ) ft_printf.h
		@ar rc $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ)
fclean: clean
	@$(RM) $(NAME)
re: fclean all
