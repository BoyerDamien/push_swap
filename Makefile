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

################################################################################
#									LIBS
################################################################################

LIBRARY_LINKS		=	-L ./libs/ft_list/ -lftlist	
LIBRARY_INCLUDES	=  	-I ./libs/ft_list/includes 
LIBRARY_HEADERS		=	./libs/ft_list/includes/ft_list.h

################################################################################
#									SOURCES
################################################################################

NAME    			=	push_swap

MAIN				= 	srcs/main.c

SRCS    			= ft_new_stack\
					  ft_stack_push\
					  ft_stack_pop\
					  ft_stack_swap\
					  ft_putchar\
					  ft_putstr\
					  ft_stack_rotate\
					  ft_stack_reverse_rotate\
					  ft_stack_push_to\
					  ft_stack_isempty

INCLUDES			=	-I ./includes/ ${LIBRARY_INCLUDES}

HEADERS				=	./includes/push_swap.h ${LIBRARY_HEADERS}

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
	$(MAKE) -C ./libs/ft_list
	${CC} ${CFLAGS} -o ${NAME} ${OBJS} ${OBJS_MAIN} ${LIBRARY_LINKS}

clean   :
	$(RM) $(OBJS)
	$(RM) ${OBJS_MAIN}
	$(MAKE) clean -C ./libs/ft_list

fclean  : clean
	$(RM) $(NAME)
	$(MAKE) fclean -C ./libs/ft_list

re      :	fclean all

###############################################################################
#									Extra Rules
################################################################################
run 	:	all
	./${NAME}

valgrind : all
	valgrind --track-origins=yes --leak-check=full --show-leak-kinds=all ./${NAME}

.PHONY  :	all clean fclean re bonus%
