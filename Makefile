# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brice <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/16 21:11:36 by brice             #+#    #+#              #
#    Updated: 2020/11/16 21:13:23 by brice            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ./**.c

OBJS		= ${SRCS:.c=.o}

INCLUDES	= ./**.h

CFLAGS		= -Wall -Wextra -Werror

GCC			= gcc

NAME		= libft.a

SRC_OBJ		= ./ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			  ft_lstmap.c

BONUS		= ${SRC_OBJ:.c=.o}

all:		${NAME}

$(NAME):
		${GCC} -c -I ${INCLUDES} ${CFLAGS} ${SRCS}
		ar rc ${NAME} ${OBJS}
		ranlib ${NAME}

bonus:  $(OBJS) $(BONUS)
	 	ar rc $(NAME) $(BONUS) $(OBJS)

clean:
		rm -f ${OBJS}
		rm -f ${BONUS}

fclean:	clean
		rm -f ${NAME}

re:		fclean  all

.PHONY: all clean fclean re $(NAME) bonus
