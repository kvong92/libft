NAME = libft.a
NAME_SO = libft.so

SRC =   ft_memset.c \
        ft_bzero.c \
        ft_memcpy.c \
        ft_memccpy.c \
        ft_memmove.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_strlen.c \
        ft_strdup.c \
        ft_strchr.c \
        ft_strrchr.c \
        ft_strncmp.c \
        ft_strlcat.c \
        ft_strlcpy.c \
        ft_atoi.c \
        ft_isalpha.c \
        ft_isdigit.c \
        ft_isalnum.c \
        ft_isascii.c \
        ft_isprint.c \
        ft_toupper.c \
        ft_tolower.c \
        ft_substr.c \
        ft_strjoin.c \
        ft_itoa.c \
        ft_putchar_fd.c \
        ft_putstr_fd.c \
        ft_strtrim.c \
        ft_strnstr.c \
        ft_split.c \
        ft_calloc.c \
        ft_putendl_fd.c \
        ft_putnbr_fd.c \
        ft_strmapi.c

SRC_BONUS = ft_lstnew.c \
            ft_lstadd_front.c \
            ft_lstsize.c \
            ft_lstlast.c \
            ft_lstadd_back.c \
            ft_lstdelone.c \
            ft_lstclear.c \
            ft_lstiter.c \
            ft_lstmap.c \

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

CC = gcc

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ_BONUS) $(OBJ)
	ar rcs $(NAME) $(OBJ_BONUS) $(OBJ)

$(NAME_SO): $(SRC)
	gcc -fPIC $(CFLAGS) -c $(SRC)
	gcc -shared -o $(NAME_SO) $(OBJ)

.c.o:
	gcc $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME) $(NAME_SO)

re: fclean all

.PHONY: all clean fclean re bonus
