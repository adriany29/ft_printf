NAME = libftprintf.a

SOURCES = ft_printf.c ft_str.c ft_int.c ft_unsigned_base.c ft_paddress.c

INCLUDES = libft

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

CFLAGS = -Wall -Wextra -Werror -I

.c.o:
	cc $(CFLAGS) $(INCLUDES) -c $< -o $(<:.c=.o)

$(NAME): $(OBJECTS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

.PHONY: clean fclean

clean:
	rm -f $(OBJECTS)
	make clean -C libft

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C ./libft

re: fclean all
