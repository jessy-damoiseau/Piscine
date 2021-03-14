# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/21 17:45:01 by jdamoise          #+#    #+#              #
#    Updated: 2020/07/23 18:42:06 by jdamoise         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc

CFLAGS=-Wall -Werror -Wextra

EXEC=do-op

SRC= $(srcs/wildcard *.c)

OBJ= $(SRC:.c=.o)

all: $(EXEC)

do-op: $(OBJ)
		$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
		$(CC) -o $@ -c $< $(CFLAGS)

clean:
		rm -rf *.o

fclean: clean
		rm -rf $(EXEC)

re : fclean all
.PHONY: clean fclean
