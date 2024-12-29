# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anadhira <anadhira@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 15:09:42 by anadhira          #+#    #+#              #
#    Updated: 2024/11/12 13:42:29 by anadhira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PART1 = \
		ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isascii.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_tolower.c \
		ft_toupper.c

PART2 = \
		ft_itoa.c \
		ft_split.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c 

BONUS = \
		ft_lstadd_front.c \
		ft_lstadd_back.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c 

COMPILER = cc

CMPFLAGS = -Wall -Wextra -Werror

SOURCES = $(PART1) $(PART2)

OBJECTS = $(SOURCES:.c=.o)

BONUS_OBJECTS = $(BONUS:.c=.o)

%.o: %.c
	$(COMPILER) $(CMPFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	@ar -rcs $(NAME) $(OBJECTS)

all: $(NAME)

bonus: $(OBJECTS) $(BONUS_OBJECTS)
	@ar -rcs $(NAME) $(OBJECTS) $(BONUS_OBJECTS)

clean:
	rm -rf $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean 
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
