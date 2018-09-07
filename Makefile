# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avan-ni <avan-ni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/14 11:40:00 by avan-ni           #+#    #+#              #
#    Updated: 2018/09/06 23:39:54 by avan-ni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LEM = corewar

FLAGS = -Wall -Werror -Wextra

SRCS = srcs/read_player.c

OBJS = read_player.o

HEADERS = -I libft/includes -I includes/

LIB = libft/libft.a -lncurses

$(LEM) :
	@make fclean -C libft/
	@make -C libft/
	@make clean -C libft/
	gcc $(FLAGS) -c $(SRCS) srcs/main.c $(HEADERS)
	gcc $(FLAGS) $(OBJS) main.o -o $(LEM) $(LIB)
	@make clean
	@echo "\x1B[33mCOREWAR compiled\x1B[0m"

all : $(LEM)

clean :
	@rm -rf $(OBJS) main.o

fclean : clean
	@make fclean -C libft/
	@rm -rf $(LEM)
	@echo "\x1B[35mCLEAN\x1B[0m"

re : fclean all
