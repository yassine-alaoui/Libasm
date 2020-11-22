# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/16 14:25:42 by yaalaoui          #+#    #+#              #
#    Updated: 2020/11/22 19:43:31 by yaalaoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_strlen.s \
		ft_strcpy.s \
		ft_read.s \
		ft_strcmp.s \
		ft_strdup.s \
		ft_write.s	\

NAME = libasm.a

ASM_COMPILER = nasm -f macho64

all:	$(NAME)

%o		:	%s
	$(ASM_COMPILER) $<

$(NAME) :	$(SRC:.s=.o)
	ar -rc  libasm.a $(SRC:.s=.o)
	ranlib libasm.a

bonus:
	$(SRC:.s=.o) $(BONUS)
	ar -rc libasm.a $(SRC:.s=.o)
	ranlib libasm.a

clean:
		rm -f $(SRC:.s=.o) $(BONUS:.s=.o)

fclean:	clean
		rm -f $(NAME) a.out

re:		fclean all