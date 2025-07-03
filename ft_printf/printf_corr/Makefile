# Nombre biblioteca
NAME = libftprintf.a

# Compilador y banderas de compilacion
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente y archivos objeto
SRC = ft_printf.c ft_put_pf.c ft_puthex_pf.c ft_putptr_pf.c

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