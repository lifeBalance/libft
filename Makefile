# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 11:09:58 by rodrodri          #+#    #+#              #
#    Updated: 2021/10/29 16:08:04 by rodrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	libft.a

FLAGS	=	-Wall -Werror -Wextra

SRCS	=	ft_putchar.c	\
			ft_putstr.c		\
			ft_strlen.c

OBJS	=	ft_putchar.o	\
			ft_putstr.o		\
			ft_strlen.o

HDRS	=	libft.h

.PHONY:	all clean fclean re

all:	$(NAME)

$(NAME):	$(SRCS)
	gcc $(FLAGS) $(SRCS) -I $(HDRS) -c
	ar rcs $(NAME) $(OBJS)

clean:
	/bin/rm -f $(OBJS)

fclean:	clean
	/bin/rm -f $(NAME)

re:	fclean all
