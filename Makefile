NAME	=	libftprintf.a

SRC	=	ft_printf.c			\
		ft_address.c		\
		ft_hex_putnbr.c		\
		ft_putchar.c		\
		ft_putnbr.c			\
		ft_putstr.c			\
		ft_uns_putnbr.c		\
		ft_uphex_putnbr.c	\

OBJS = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar crs

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)		

re:	fclean all

.PHONY:	all clean fclean re