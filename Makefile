NAME = libft.a
EXEC = exec
CC = gcc
CFLAG = -Wall -Werror -Wextra
LDFLAG = -L. -lft
SRC = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strlcat.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c 

BONUS_SRC = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c

OBJ= $(subst .c,.o,$(SRC))

BONUS_OBJ= $(subst .c,.o,$(BONUS_SRC))

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $^
	ranlib $(NAME)
.c.o :
	$(CC) -c $(CFLAG) $(SRC) $(BONUS_SRC)
build : all
	$(CC) -o $(EXEC) $(CFLAG) $(LDFLAG) main.c

bonus : $(OBJ) $(BONUS_OBJ)
	ar rc $(NAME) $^
	ranlib $(NAME)

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all build bonus clean fclean re