# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wlwleong <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 19:03:58 by wlwleong          #+#    #+#              #
#    Updated: 2022/02/20 01:10:12 by wlwleong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror

FILES = $(wildcard ft_*.c)

OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft
	@cp ./libft/libft.a $(NAME)
	gcc $(CFLAGS) -c $(FILES)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ) ./libft/*.o a.out
	echo "clean: Objects cleaned."

fclean: clean
	rm -rf $(NAME) ./libft/libft.a
	echo "fclean: Library deleted."

re: fclean all

.PHONY: clean fclean all re
