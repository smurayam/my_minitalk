# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnnya <nnnya@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/06 02:48:26 by smurayam          #+#    #+#              #
#    Updated: 2025/12/07 18:59:12 by nnnya            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

#r: Add or replace object files in the archive.
#c: Create the archive if it doesn’t already exist.
#s: Create an index of symbols to speed up linking.
ARS = ar rcs

SRCS = ft_printf.c src/ft_printf_char.c src/ft_printf_decimal.c src/ft_printf_hex.c src/ft_printf_percent.c src/ft_printf_ptr.c src/ft_printf_str.c src/ft_printf_unsigned.c src/ft_utoa.c Libft01/ft_strlen.c Libft01/ft_strlcpy.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) Libft01/libft.a
	$(ARS) $(NAME) $(OBJS)

Libft01/libft.a:
	make -C Libft01

#bonus: $(BONUS_FLAG)

#$(BONUS_FLAG) : $(BONUS_OBJS)
#	$(ARS) $(NAME) $(BONUS_OBJS)
#	@touch $(BONUS_FLAG)

# Compile each .c file into its corresponding .o file.
# %: matches any string (used for pattern matching).
# $<: the first dependency (source .c file).
# $@: the target file (.o file to be created).
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -ILibft01

clean:
	make -C Libft01 clean
	rm -f $(OBJS) $(BONUS_OBJS)
	rm -f $(BONUS_FLAG)

fclean: clean
	make -C Libft01 fclean
	rm -f $(NAME)

re: fclean all


.PHONY: all bonus clean fclean re% 