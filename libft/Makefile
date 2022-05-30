# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: swofferh <swofferh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/19 21:39:04 by swofferh      #+#    #+#                  #
#    Updated: 2022/05/30 17:32:00 by swofferh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

include ../inc/Makepretty.mk

PROJECT = 	libft
NAME 	= 	$(PROJECT).a
INC 	=	../inc/
CFLAGS 	= 	-Wall -Wextra -Werror

LIB 	= 	ft_atoi.c ft_islower.c ft_memccpy.c ft_prints.c ft_putnbr_fd.c\
			ft_strdup.c ft_strncpy.c ft_wordlen.c ft_putchar.c ft_putocta.c\
			ft_bzero.c ft_isprint.c ft_memchr.c ft_strjoin.c ft_strnstr.c\
			ft_words.c ft_calloc.c ft_isspace.c ft_memcmp.c ft_strncmp.c\
			ft_putstr.c ft_strlcat.c ft_strrchr.c ft_strcmp.c ft_isalnum.c\
			ft_isupper.c ft_memcpy.c ft_putendl.c ft_puthexa.c ft_strlcpy.c\
			ft_strtrim.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_toupper.c\
			ft_split.c ft_strlen.c ft_substr.c ft_isascii.c ft_lenbase.c\
			ft_memset.c  ft_strchr.c ft_strmapi.c ft_tolower.c ft_maxof.c\
			ft_isdigit.c ft_numlen.c ft_putnbr.c ft_strclen.c ft_putlen.c\
			ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c\
			get_all_lines.c get_next_line.c

PFT		=	type_c.c type_s.c type_d.c type_u.c type_p.c type_x.c\
			percentage.c pfunctions.c preci_width.c ft_printf.c

LST		=	lst_reverse.c lst_move_front.c lst_move_back.c\
			lst_last.c lst_add_back.c lst_del_one.c\
			lst_new.c lst_add_front.c lst_size.c\
			lst_clear.c lst_map.c lst_itter.c

DIR_OBJ = obj
DIR_LIB = all
DIR_LST = lists
DIR_PFT = printf
O_LIB = $(LIB:%.c=$(DIR_OBJ)/$(DIR_LIB)/%.o) 
O_PFT = $(PFT:%.c=$(DIR_OBJ)/$(DIR_PFT)/%.o)
O_LST = $(LST:%.c=$(DIR_OBJ)/$(DIR_LST)/%.o)

$(DIR_OBJ)/$(DIR_LIB)/%.o: $(DIR_LIB)/%.c
	@$(NEW_DIR) $(dir $@)
	@$(CC) $(CFLAGS) -I $(INC) -c $< -o $@
	$(COMPILE_MESSAGE)

$(DIR_OBJ)/$(DIR_LST)/%.o: $(DIR_LST)/%.c
	@$(NEW_DIR) $(dir $@)
	@$(CC) $(CFLAGS) -I $(INC) -c $< -o $@
	$(MESSAGE_LINKED)
	
$(DIR_OBJ)/$(DIR_PFT)/%.o: $(DIR_PFT)/%.c
	@$(NEW_DIR) $(dir $@)
	@$(CC) $(CFLAGS) -I $(INC) -c $< -o $@
	$(MESSAGE_PRINTF)

all: $(NAME)

$(NAME): $(O_LIB) $(O_PFT) $(O_LST)
	@$(AR) rcs $@ $^
	@ranlib $@
	$(ADD_GIT_IGNORE)
	$(LIBFT_MESSAGE)

clean:
	@$(RM) $(DIR_OBJ)
	$(EMPTY_MESSAGE)
	$(MESSY_MESSAGE)
	$(DONE_MESSAGE)

fclean: clean
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
