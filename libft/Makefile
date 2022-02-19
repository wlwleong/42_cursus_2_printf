# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wlwleong <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 00:21:17 by wlwleong          #+#    #+#              #
#    Updated: 2022/02/20 00:39:13 by wlwleong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror

FILES = $(wildcard ft_*.c)

OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(FILES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ) a.out
	echo "Libft: clean: Objects cleaned."

fclean: clean
	rm -f $(NAME)
	echo "Libft: fclean: Library deleted."

re: fclean all

.PHONY: clean fclean all re
