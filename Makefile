NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
# files

TESTFILE = main.c
SRC = ft_bzero.c ft_isalfa.c ft_isascii.c ft_isprint.c ft_memchr.c ft_memcpy.c	\
ft_memset.c ft_putendl_fd.c ft_putstr_fd.c ft_strchr.c ft_striteri.c			\
ft_strlcat.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_substr.c ft_toupper.c		\
ft_atoi.c ft_calloc.c ft_isalnum.c ft_isdigit.c ft_itoa.c ft_memcmp.c			\
ft_memmove.c ft_putchar_fd.c ft_putnbr_fd.c ft_split.c ft_strdup.c ft_strjoin.c	\
ft_strlcpy.c ft_strmapi.c ft_strnstr.c ft_strtrim.c ft_tolower.c				\

#OBJ = $(SRC:%.c=./obj/%.o)
OBJ = $(SRC:%.c=%.o)


# commands

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean clean all

.PHONY: all clean fclean re
