# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 19:10:06 by ireal-po          #+#    #+#              #
#    Updated: 2022/12/11 17:04:44 by ireal-po         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC = gcc
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c\
		ft_isascii.c ft_isprint.c ft_strlen.c\
		ft_memset.c ft_bzero.c ft_memcpy.c\
		ft_memmove.c ft_strlcpy.c ft_strlcat.c\
		ft_toupper.c
		
		
	  
OBJS = $(SRC:.c=.o)

$(NAME) : $(OBJ)
	$(CC) $(CFLAG) -c $(SRC)
	@ar rcs $(NAME) $(OBJS) $(SRC)

all : $(NAME)
clean:
	rm -f *.o $(NAME)
fclean:
	rm -f *.a *.o $(NAME)
re: make fclean all
compile:
	$(CC) $(CFLAG) $(SRC)
.PHONY: all clean fclean re
