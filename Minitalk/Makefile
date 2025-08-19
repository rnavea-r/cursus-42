NAME = minitalk
SERVER = server 
CLIENT = client

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SERVER_SRCS = server.c utils.c
CLIENT_SRCS = client.c utils.c

CLIENT_OBJS = $(CLIENT_SRCS:.c=.o)
SERVER_OBJS = $(SERVER_SRCS:.c=.o)

RM = rm -f

all: $(CLIENT) $(SERVER)

$(CLIENT): $(CLIENT_OBJS)
	$(CC) $(CFLAGS) $(CLIENT_OBJS) -o $(CLIENT)

$(SERVER): $(SERVER_OBJS) 
	$(CC) $(CFLAGS) $(SERVER_OBJS) -o $(SERVER)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(CLIENT_OBJS) $(SERVER_OBJS)

fclean: clean
	$(RM) $(SERVER) $(CLIENT)

re: fclean all

.PHONY: all clean fclean re 

