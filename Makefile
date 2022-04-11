NAME = libft.a
CC=gcc
FLAG=-Wall -Werror -Wextra
SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_split.c \
	ft_strlcpy.c ft_strlcat.c ft_strlen.c ft_swap.c
		
OBJ = ft_bzero.o ft_isnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memcpy.o \
	ft_memmove.o ft_memset.o ft_putchar_fd.o ft_putendl_fd.o ft_putstr_fd.o ft_split.o \
	ft_strlcpy.o ft_strlcat.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	$(CC) $(FLAG) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all