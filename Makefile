# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/29 16:20:43 by rlouvrie          #+#    #+#              #
#    Updated: 2024/05/29 17:27:29 by rlouvrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

NASM = nasm

ASMFLAGS = -f elf64

SRC_DIR = srcs

OBJ_DIR = objs

ASM_FILES = ft_strlen.s \
			ft_strcpy.s \
			ft_strcmp.s \
			ft_write.s \
			ft_read.s \
			ft_strdup.s

ASM_SRCS = $(addprefix $(SRC_DIR)/, $(ASM_FILES))

OBJS = $(addprefix $(OBJ_DIR)/, $(ASM_FILES:.s=.o))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.s | $(OBJ_DIR)
	$(NASM) $(ASMFLAGS) $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
