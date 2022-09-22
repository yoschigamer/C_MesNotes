# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 05:35:51 by kschneid          #+#    #+#              #
#    Updated: 2022/09/23 01:13:27 by kschneid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = /includes
CFLAGS = -Wall -Wextra -Werror
OPTION = -I $(HEADER) -c
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = ${SRC:.c=.o}

.c.o:	
	gcc $(CFLAGS) $(OPTION) $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

all: ${NAME}
	
clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}
	
re : fclean all