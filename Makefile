# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 19:10:06 by ireal-po          #+#    #+#              #
#    Updated: 2022/12/20 16:18:05 by ireal-po         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC = gcc -c
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c\
		ft_isascii.c ft_isprint.c ft_strlen.c\
		ft_memset.c ft_bzero.c ft_memcpy.c\
		ft_memmove.c ft_strlcpy.c ft_strlcat.c\
		ft_toupper.c ft_tolower.c ft_strchr.c\
		ft_strrchr.c ft_strncmp.c\
		
	  
OBJS = $(SRC:.c=.o)

$(NAME) : $(OBJ)
	$(CC) $(CFLAG) $(SRC)
	@ar rcs $(NAME) $(OBJS) $(SRC)

all : $(NAME)
clean:
	rm -f *.o $(NAME)
fclean:
	rm -f *.a *.o $(NAME)
re: fclean all
compile:
	$(CC) $(CFLAG) $(SRC)
.PHONY: all clean fclean re
