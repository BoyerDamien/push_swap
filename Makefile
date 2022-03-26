# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/13 18:42:28 by dboyer            #+#    #+#              #
#    Updated: 2020/05/12 16:19:53 by dboyer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME    			=	push_swap

MAIN				= 	srcs/main.c

SRCS    			= 	

INCLUDES			=	-I ./includes

HEADERS				=	./includes/push_swap.h

OBJS_MAIN			= 	$(MAIN:.c=.o)
OBJS				= 	$(FIL:.c=.o)

FIL = $(addsuffix .c, $(addprefix srcs/, $(SRCS)))

CFLAGS  			= 	-Werror -Wall -Wextra -std=c99 -O3 -g ${INCLUDES}
CC     				= 	clang
RM      			= 	rm -f

################################################################################
#								Basic Rules
################################################################################

%.o: %.c ${HEADERS}
	$(CC) $(CFLAGS) -c $< -o $@

all     :	$(NAME)

$(NAME) : $(lib) $(OBJS) $(OBJS_MAIN) 
	$(MAKE) -C ./lib/lib_ft_list
	${CC} ${CFLAGS} -o ${NAME} ${OBJS} ${OBJS_MAIN}

clean   :
	$(RM) $(OBJS)
	$(RM) ${OBJS_MAIN}

fclean  : clean
	$(RM) $(NAME)
	$(MAKE) fclean -C ./lib/lib_ft_list

re      :	fclean all

###############################################################################
#									Extra Rules
################################################################################
run 	:	all
	./${NAME}

valgrind : all
	valgrind --track-origins=yes --leak-check=full --show-leak-kinds=all ./${NAME}

.PHONY  :	all clean fclean re bonus%
