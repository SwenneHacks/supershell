# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/19 21:39:04 by swofferh      #+#    #+#                  #
#    Updated: 2022/05/30 18:35:42 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

include inc/Makepretty.mk

PROJECT = 	minishell
NAME 	= 	$(PROJECT)
INC 	=	inc
LIB		= 	libft
LIBA 	= 	$(LIB)/$(LIB).a
CFLAGS 	= 	-Wall -Wextra -Werror

SRC 	= 	main.c

DIR_SRC = .
DIR_OBJ = obj
OBJ 	= $(SRC:%.c=$(DIR_OBJ)/$(DIR_SRC)/%.o) 

$(DIR_OBJ)/%.o:$(DIR_SRC)/%.c
	@$(NEW_DIR) $(dir $@)
	@$(CC) $(CFLAGS) -I $(INC) -c $< -o $@
	$(COMPILE_MESSAGE)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIB)
	@$(CC) $(CFLAGS) -I $(INC) -L $(LIB) -lft -lreadline $(OBJ) -o $(NAME)
	$(ADD_GIT_IGNORE)
	$(LIBFT_MESSAGE)

clean:
	@make clean -C $(LIB)
	@$(RM) $(DIR_OBJ)
	$(EMPTY_MESSAGE)
	$(MESSY_MESSAGE)
	$(DONE_MESSAGE)

fclean: clean
	@make fclean -C $(LIB)
	@$(RM) $(NAME) 
	$(BYE_GIT_IGNORE)
	$(MESSY_MESSAGE)
	$(DONE_MESSAGE)

re: fclean all
	$(EMPTY_MESSAGE)
	$(RESET_MESSAGE_3)
	$(RESET_MESSAGE_2)
	$(RESET_MESSAGE_1)

.PHONY: clean fclean re all
