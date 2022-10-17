CC = cc
CFLAGS = -Wall -Wextra -Werror 
NAME = libft.a
HEAD = libft.h
OBJ = ft_atoi.o ft_isascii.o ft_memcmp.o  ft_strchr.o  ft_strncmp.o ft_toupper.o ft_bzero.o ft_isdigit.o ft_memcpy.o  ft_strlcat.o ft_strnstr.o ft_isalnum.o ft_isprint.o ft_memmove.o ft_strlcpy.o ft_strrchr.o ft_isalpha.o ft_memchr.o  ft_memset.o  ft_strlen.o  ft_tolower.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o \
	ft_split.o ft_itoa.o ft_strmapi.o ft_striteri.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o \
	ft_lstnew.o ft_lstadd_front.o
%.o: %.c $(HEAD)
	$(CC) -c $< $(CFLAGS)

all:$(NAME)

$(NAME):$(OBJ)
	ar -rcs $(NAME) $(OBJ)
clean:
	rm -f *.o
fclean:clean
	rm -f $(NAME)
re:fclean
# re:fclean all
