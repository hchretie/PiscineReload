# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: hchretie <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/09 17:48:52 by hchretie     #+#   ##    ##    #+#        #
#    Updated: 2018/10/09 21:24:03 by hchretie    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a
SRCDIR = ./srcs/
INCLUDES = ./includes/
FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCS = $(addprefix $(SRCDIR),$(FILES))
OBJ = $(FILES:.c=.o)
CFLAGS = -Wall -Werror -Wextra
CC = gcc

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) -I $(INCLUDES) -c $(SRCS)
			ar rc $(NAME) $(OBJ)
				ranlib $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
