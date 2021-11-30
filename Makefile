# -*- Makefile -*-
NAME := libftprintf.a
CFLAGS ?= -Wall -Wextra -Werror
SRCS := \
ft_adress.c \
ft_char.c \
ft_conversion_specifier.c \
ft_hex.c \
ft_printf.c \
ft_putnumber.c

OBJS := ${SRCS:%.c=%.o}

HEADERFILES := ft_printf.h

all: $(NAME)
	
%.o: %.c $(HEADERFILES)
	$(CC) -c $(CFLAGS) -o $@ $<

$(NAME): $(OBJS)
	ar -ru $(NAME) $^

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME) $^

re: fclean all

.PHONY: all, clean, fclean, re
