# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schennal <schennal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 16:48:57 by schennal          #+#    #+#              #
#    Updated: 2024/05/12 17:16:07 by schennal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex02

SRCS		=	main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp 
				
OBJS		=	$(SRCS:%.cpp=%.o)

CC			=	c++

FLAGS		=	-std=c++98 -Wall -Wextra -Werror

RM			=	rm -rf

DEFAULT		=	"\033[0m"
RED			=	"\033[0;31m"
GREEN		=	\033[1;32m
CYAN		=	"\033[3;36m"
MAGENTA		=	"\033[0;35m"

%.o : %.cpp
			@printf $(MAGENTA)
			$(CC) $(FLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(FLAGS) $(OBJS) -o $@
			@echo "$(GREEN)$(NAME) is ready ✔️✔️"
			

clean:
			@$(RM) $(OBJS)
			@echo $(RED)"Deleted CPP 04 object file"$(DEFAULT)

fclean:		clean
			@$(RM) $(NAME)
			@echo $(RED)"Deleted CPP 04 executable"$(DEFAULT)

re:			fclean all

.PHONY:		all clean fclean re