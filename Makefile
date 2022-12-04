# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 14:59:54 by moouaamm          #+#    #+#              #
#    Updated: 2022/10/30 14:09:27 by moouaamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCF = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strlen.c \
	   ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	   ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_atoi.c ft_strdup.c \
	   ft_substr.c ft_strjoin.c ft_split.c ft_itoa.c ft_strmapi.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_isprint.c \
	   ft_putnbr_fd.c ft_strtrim.c ft_memcpy.c ft_memmove.c ft_memset.c \
	   ft_memcmp.c ft_memchr.c ft_bzero.c ft_calloc.c ft_striteri.c

B_SRCF = ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
	   ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	   ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJF = ${SRCF:.c=.o}
B_OBJF = ${B_SRCF:.c=.o}

all: ${NAME}

${NAME} : ${OBJF}
	@ar rc ${NAME} ${OBJF}

%.o : %.c libft.h
	@echo "rani dayr hada ->" $< "fhada" $@
	@gcc ${CFLAGS} -c $< -o $@

bonus : ${B_OBJF} all
	@ar rc ${NAME} ${B_OBJF}

clean :
	@rm -f ${OBJF} ${B_OBJF}


fclean : clean
	@rm -f ${NAME}


re : fclean all


.PHONY : all clean fclean re
