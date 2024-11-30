NAME = libftprintf.a

SRC = ft_printf.c ft_putnbr.c print_char.c print_hex.c print_memory.c \
      print_string.c print_unsigned.c

OBJ = ${SRC:.c=.o}

#CFLAGS = -Wall -Wextra -Werror

CC = cc

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(?)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
