# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shimi-be <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/11 11:53:14 by shimi-be          #+#    #+#              #
#    Updated: 2024/09/25 15:13:31 by shimi-be         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCLUDE = libft.h printft.h 
LIB = ar rcs
SRC = ft_printf.c ft_printf_helper.c ft_printf_helper2.c 

FLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

all : $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

bonus : $(OBJ) $(OBJ_BONUS) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ) $(OBJ_BONUS)

%.o: %.c $(INCLUDE)  Makefile
	cc $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus
