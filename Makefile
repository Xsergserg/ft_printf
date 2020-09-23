# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile good one                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/10 14:22:17 by rbeach            #+#    #+#              #
#    Updated: 2020/05/23 20:49:58 by rbeach           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

LIBFT_DIR = libft

LIBFT_LIB = libft.a

HEADER = printf.h

HEADER_DIR = includes

S_DIR = src

O_DIR = obj

SRCS = dateparsers.c flagparser.c ft_printf.c inthandler.c resulters.c

OBJECTS = $(addprefix $(O_DIR)/,$(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADER_DIR)/$(HEADER) libft
	ar crs $(NAME) $(OBJECTS)

$(O_DIR)/%.o: $(S_DIR)/%.c
	@mkdir -p $(O_DIR)
	$(CC) $(FLAGS) -I $(HEADER_DIR) -o $@ -c $<

libft:
	$(MAKE) -C $(LIBFT_DIR)	

clean:
	rm -rf $(O_DIR)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: libft all clean fclean
