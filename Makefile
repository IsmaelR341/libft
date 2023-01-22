# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 19:10:06 by ireal-po          #+#    #+#              #
#    Updated: 2023/01/22 12:38:51 by ireal-po         ###   ########.fr        #
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
		ft_strrchr.c ft_strncmp.c ft_memchr.c\
		ft_memcmp.c ft_strnstr.c ft_atoi.c\
		ft_calloc.c ft_strdup.c ft_substr.c\
		ft_strjoin.c ft_strtrim.c ft_itoa.c\
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
		ft_putstr_fd.c ft_putendl_fd.c
		
			  
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