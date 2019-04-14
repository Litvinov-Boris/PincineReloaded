# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svivienn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 22:23:17 by svivienn          #+#    #+#              #
#    Updated: 2019/04/02 22:23:19 by svivienn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ./srcs/
HEADER = ./includes/
FLAGC = -Wall -Wextra -Werror
OBG = ft_putchar.o ft_putstr.o  ft_strcmp.o ft_strlen.o ft_swap.o
FTSRCS = $(SRCS)ft_putchar.c $(SRCS)ft_putstr.c $(SRCS)ft_strcmp.c \
	$(SRCS)ft_strlen.c $(SRCS)ft_swap.c

all: $(NAME)

$(NAME):
	gcc $(FLAGC) -I$(HEADER) -c $(FTSRCS)
	ar rc $(NAME) $(OBG)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBG)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all