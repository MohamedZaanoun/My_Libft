NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalpha.c ft_isascii.c ft_isdigit.c ft_memchr.c ft_memcmp.c \

SRC_OBJ = $(SRC:.c= .o)
# $(BSRC_OBJ) = $(BSRC.c=.o)



# NAME = libft.a
# CC = gcc
# CFLAGS = -Wall -Wextra -Werror
# SRC = ft_isalpha.c ft_isascii.c ft_isdigit.c ft_memchr.c ft_memcmp.c
# SRC_OBJ = $(SRC:.c=.o)

# all: $(NAME)

# $(NAME): $(SRC_OBJ)
# 	ar -rcs $(NAME) $(SRC_OBJ)

# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# clean:
# 	rm -f $(SRC_OBJ)

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all
