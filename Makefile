NAME=libft.a
AR=ar
ARFLAGS=rc
CC=gcc
CFLAGS=-Wall -Wextra -Werror
LDLIB=-lcheck -lft
LDFLAGS=-L./
SRCDIR=srcs
BIN=checklib
CHECKSRC=libft.c
INCLUDES=-I./
SRC=ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c	\
	ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c		\
	ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c	\
	ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c	\
	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c	\
	ft_isprint.c ft_tolower.c ft_toupper.c ft_memalloc.c ft_memdel.c\
	ft_strclr.c ft_strdel.c ft_striter.c ft_striteri.c ft_strnew.c	\
	ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c	\
	ft_strjoin.c ft_strtrim.c ft_itoa.c ft_putchar.c ft_putstr.c	\
	ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c			\
	ft_putendl_fd.c ft_putnbr_fd.c ft_strsplit.c ft_lstnew.c		\
	ft_lstdelone.c ft_lstadd.c ft_lstiter.c ft_lstdel.c ft_lstmap.c
OBJ=$(SRC:.c=.o)

all: $(NAME)

%.o: $(SRCDIR)/%.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $<

$(NAME): $(OBJ)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJ)
	@ranlib $(NAME)

%.c: %.check
	@checkmk $^ > $@

$(BIN): $(CHECKSRC) $(NAME)
	@$(CC) $(CFLAGS) -o $@ $< $(INCLUDES) $(LDFLAGS) $(LDLIB)
	@rm $(CHECKSRC)

check: $(BIN)
	@./$(BIN)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

cclean: fclean
	rm -f $(BIN) $(CHECKSRC)

re: fclean $(NAME)

.PHONY: check clean fclean cclean re
