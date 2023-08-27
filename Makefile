# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 22:20:55 by conde-an          #+#    #+#              #
#    Updated: 2023/08/14 08:03:19 by conde-an         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# THIS IS A MAKEFILE (to create it copy all the path you run to compiled all file and then change all terms with CONSTANT SIMBOLS)

#CC = gcc #Constant
#CFLAG = -Wall -Wextra -Werror #Constant

#all: #to create of OBJECTIVE FILE
#	gcc -Wall -Wextra -Werror ft_isalpha.c  libft.h  main.c -o prog_ft_isalpha 
#Always in a new line and press 1TAB (4spaces)
#exec:
#	./prog_ft_isalpha
# Always in a new line and press 1TAB (4spaces)
#clean:
#	rm -rf prog_ft_isalpha
#	rm -rf *.exe
#	rm -rf *.o


#START

# List all ft_*.c source files here
NAME = libft.a

SRC = ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_strlen.c \
ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_memmove.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_memchr.c \
ft_memcmp.c \
ft_strnstr.c \
ft_atoi.c \
ft_calloc.c \
ft_strdup.c \
ft_putnbr_fd.c \
ft_putendl_fd.c \
ft_putstr_fd.c \
ft_putchar_fd.c \
ft_striteri.c \
ft_strmapi.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_split.c \
ft_strtrim.c \
ft_itoa.c \
ft_striteri.c \

# Generate the object file names from the source file names
OBJS = $(SRCS:.c=.o)

CC = gcc 

CFLAG = -Wall -Wextra -Werror

# Name of the static library
NAME = libft.a

# Name of the final executable
EXEC = prog_libft


$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

#all: ft_isalpha.o main.o
#	$(CC) $(CFLAG) ft_isalpha.o main.o -o prog_ft_isalpha 
#To create a name program we need linked into a PROGRAM the OBJ file func.c and main.c in .o and -o nameOFprogram


#ft_isalpha.o: ft_isalpha.c libft.h
#	$(CC) $(CFLAG) -c ft_isalpha.c -o ft_isalpha.o
# Logic: after we put the program guide on MAKEFILE take the function OBJ FILE .o: How you compiled it? with functionFile.c and libft.h
#to executed it  put -c for don't do next step to the file (NO LINKED only compiled) than the func.c file -o to make a file OBJ of it and the name FUNCTION.O


#main.o: main.c libft.h
#	$(CC) $(CFLAG) -c main.c -o main.o


# Targets
all: $(NAME) $(EXEC)

$(EXEC): $(OBJS) $(NAME)
	$(CC) $(CFLAGS) -o $@ $(OBJS) -L. -lft

$(OBJS): %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f $(EXEC)

re: fclean all

.PHONY: all exec clean fclean re