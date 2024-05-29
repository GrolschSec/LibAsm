# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/29 17:13:41 by rlouvrie          #+#    #+#              #
#    Updated: 2024/05/29 18:28:42 by rlouvrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

SRC_DIR = srcs

SRCS_FILES = test.c \
			test_ft_strlen.c

SRCS = $(addprefix $(SRC_DIR)/, $(SRCS_FILES))

OBJ_DIR = objs

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS_FILES:.c=.o))

LIBASM = ../libasm.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBASM)
	gcc -o $(NAME) $(OBJS) -L.. -lasm -lcheck -lm -lrt -lsubunit -pthread

$(LIBASM):
	$(MAKE) -C ..

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	gcc -c $< -o $@

clean:
	make -C .. clean
	rm -rf $(OBJ_DIR)

fclean: clean
	make -C .. fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
