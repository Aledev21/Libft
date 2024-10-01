CC		=	cc
CFLAGS	=	-Wall -Wextra -Wextra

NAME	=	libft.a

SRCS	=	ft_bzero.c \
			ft_isalnum.c

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) 

fclean: clean

clean:

re: 

.PHONY: all fclean clean re