# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 11:09:58 by rodrodri          #+#    #+#              #
#    Updated: 2021/10/29 16:39:12 by rodrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	libft.a

FLAGS	=	-Wall -Werror -Wextra

SRCS	=	ft_putchar.c	\
			ft_putstr.c		\
			ft_strlen.c		\
			ft_strcmp.c		\
			ft_strncmp.c	\
			ft_strcpy.c

OBJS	=	ft_putchar.o	\
			ft_putstr.o		\
			ft_strlen.o		\
			ft_strcmp.o		\
			ft_strncmp.o	\
			ft_strcpy.o

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
