# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 11:18:09 by jsalaber          #+#    #+#              #
#    Updated: 2024/01/11 13:29:55 by jsalaber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_print_number.c ft_print_hexa.c ft_print_string.c \
	ft_print_pointer.c \

OBJS = $(SRCS:%.c=%.o)

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(OBJS): %.o:%.c
	@cc -c $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re