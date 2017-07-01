NAME = libft.a
FILESC =	ft_atoi.c \
			ft_factorial.c \
			ft_in_range.c \
			ft_is_prime.c \
			ft_power.c \
			ft_putchar.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_sqrt.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strlen.c \
			ft_strlowcase.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strrev.c \
			ft_strstr.c \
			ft_strupcase.c \
			ft_swap.c 
		
FILESO =	ft_atoi.o \
			ft_factorial.o \
			ft_in_range.o \
			ft_is_prime.o \
			ft_power.o \
			ft_putchar.o \
			ft_putnbr.o \
			ft_putstr.o \
			ft_sqrt.o \
			ft_strcmp.o \
			ft_strcpy.o \
			ft_strlen.o \
			ft_strlowcase.o \
			ft_strncmp.o \
			ft_strncpy.o \
			ft_strrev.o \
			ft_strstr.o \
			ft_strupcase.o \
			ft_swap.o 


all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(FILESC)
	ar rc $(NAME) $(FILESO)
	ranlib $(NAME)

clean:
	rm -f $(FILESO)

fclean: clean
	rm -f $(NAME)

re: fclean all