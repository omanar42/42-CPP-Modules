#*************************************************#
#      ____  ____ ___  ____ _____  ____ ______    #
#     / __ \/ __ `__ \/ __ `/ __ \/ __ `/ ___/    #
#    / /_/ / / / / / / /_/ / / / / /_/ / /        #
#    \____/_/ /_/ /_/\__,_/_/ /_/\__,_/_/         #
#                                                 #
#    Makefile                                     #
#    By: omanar <omanar@student.1337.ma>          #
#    Created: 2023/01/30 06:32 PM by omanar 	  #
#                                                 #
#*************************************************#

NAME	=	Fixed
RM		=	rm -f
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp Fixed.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@echo "\n\033[0;36m   | Compiling...\033[0m"
	@$(CC)  $(SRCS) -o $(NAME)
	@echo "\033[1;32m   | Fixed has been compiled!\033[0m\n"

clean:
	@$(RM) $(NAME)
	@echo "\n\033[0;31m</ EVERYTHING HAS BEEN DELETED! >\033[0m\n"

fclean: clean

re: fclean all

.PHONY: all clean fclean re
