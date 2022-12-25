#*************************************************#
#      ____  ____ ___  ____ _____  ____ ______    #
#     / __ \/ __ `__ \/ __ `/ __ \/ __ `/ ___/    #
#    / /_/ / / / / / / /_/ / / / / /_/ / /        #
#    \____/_/ /_/ /_/\__,_/_/ /_/\__,_/_/         #
#                                                 #
#    Makefile                                     #
#    By: omanar <omanar@student.1337.ma>          #
#    Created: 2022/12/20 01:50 PM by omanar 	  #
#                                                 #
#*************************************************#

NAME	=	Horde
RM		=	rm -f
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp Zombie.cpp zombieHorde.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@echo "\n\033[0;36m   | Compiling...\033[0m"
	@$(CC)  $(SRCS) -o $(NAME)
	@echo "\033[1;32m   | Horde has been compiled!\033[0m\n"

clean:
	@$(RM) $(NAME)
	@echo "\n\033[0;31m</ EVERYTHING HAS BEEN DELETED! >\033[0m\n"

fclean: clean

re: fclean all

.PHONY: all clean fclean re
