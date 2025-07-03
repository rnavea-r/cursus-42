# Nombre biblioteca
NAME = libft.a

# Compilador y banderas de compilacion
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente y archivos objeto
SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c \
ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_memchr.c \
ft_memcmp.c ft_strnstr.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_calloc.c\
ft_atoi.c ft_strdup.c ft_split.c ft_substr.c ft_strjoin.c ft_itoa.c \
ft_strmapi.c ft_striteri.c ft_strtrim.c

OBJS = $(SRC:.c=.o)

RM = rm -f

all: $(NAME)

# Para crear biblioteca
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Pasa archivos .c a .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

# Regla para borrar todos los archivos creados
clean:
	$(RM) $(OBJS)

# Eliminar todos los archivos .o y .a
fclean: clean
	$(RM) $(NAME)

re: fclean all

# Indica que las siguientes reglas no son archivos reales
.PHONY: all clean fclean re
