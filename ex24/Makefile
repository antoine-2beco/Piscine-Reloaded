# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 15:29:01 by ade-beco          #+#    #+#              #
#    Updated: 2023/10/10 15:37:53 by ade-beco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		=	srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJS		=	$(SRCS:.c=.o)

CC 			=	cc

LIBC		=	ar rcs

FLAGS		=	-Wall -Wextra -Werror

INCL		=	-I ./includes

all:		$(OBJS) $(NAME)

%.o:		%.c
				$(CC) $(FLAGS) -c $(INCL) $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
				$(LIBC) $(NAME) $(OBJS)
clean:
				rm -f $(OBJS)
fclean:		clean
				rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re