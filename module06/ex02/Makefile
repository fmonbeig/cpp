# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/22 14:48:02 by fmonbeig          #+#    #+#              #
#    Updated: 2022/02/24 15:49:24 by fmonbeig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

blue			= /bin/echo -e -n "\x1b[1m\x1b[34m$1\x1b[0m"
green			= /bin/echo -e -n "\x1b[1m\x1b[32m$1\x1b[0m"
filename		= /bin/echo -e -n "\x1b[30m\x1b[47m\x1b[1m$1\x1b[0m"

NAME			= Function
CC				= c++
FLAGS			= -Wall -Werror -Wextra -g -std=c++98 -pedantic

OBJ_DIR			= ./obj/

SRC_LIST		= 	main.cpp\
					Base.cpp\

SRC				= $(SRC_LIST)

OBJ				= $(SRC:%.cpp=$(OBJ_DIR)%.o)

all:			$(NAME)

$(NAME):		$(OBJ_DIR) $(OBJ)
				@/bin/echo -e "\n💫 Linking everything..."
				@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
				@$(call filename,"'$(NAME)'")
				@$(call green," successfully created. ✅")
				@/bin/echo -e "\n\n🚀 You're ready to go. Enjoy the ride!"

$(OBJ_DIR)%.o:  %.cpp Makefile
				@echo "🏗  Compiling $<..."
				@$(CC) $(CC_FLAGS) -c $< -o $@

$(OBJ_DIR):
				@mkdir -p $(OBJ_DIR)

clean:
				@/bin/echo "💦 Cleaning..."
				@rm -rf $(OBJ_DIR)
				@$(call green,"Directory cleaned. ✅")
				@echo

fclean:			clean
				@rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
