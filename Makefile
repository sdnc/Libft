NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -c

FILES 		=	ft_memset.c \
					ft_bzero.c \
					ft_memcpy.c \
					ft_strlen.c \
					ft_memmove.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_strlcpy.c \
					ft_strdup.c \
					ft_strlcat.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_strnstr.c \
					ft_strncmp.c \
					ft_atoi.c \
					ft_isalpha.c \
					ft_isdigit.c \
					ft_isalnum.c \
					ft_isprint.c \
					ft_toupper.c \
					ft_tolower.c \
					ft_isascii.c \
					ft_striteri.c \
					ft_strmapi.c \
					ft_strjoin.c \
					ft_strtrim.c \
					ft_split.c \
					ft_itoa.c \
					ft_putchar_fd.c \
					ft_putnbr_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_calloc.c \
					ft_substr.c	\

OBJ		=	 $(FILES:.c=.o)

all: $(NAME)

# This won't run if the .o files don't exist or are not modified
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# This won't run if the source files don't exist or are not modified
$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

# I use .PHONY to make sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: clean fclean all re
