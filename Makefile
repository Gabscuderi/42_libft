NAME = libft.a 

HEADER = libft.h


SOURCES = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c 
		  ft_strlen.c ft_memset.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c 
		  ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c 
		  ft_memcmp.c ft_strnstr.c ft_atoi.c

OBJS		= $(SRCS:.c=.o)


CC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -f 

AR = ar rcs 

$(NAME) : $(OBJS) 
	${AR} ${NAME} ${OBJ}

%.o: %.c $(HEADER_FILES)
	${CC} -c $< ${FLAGS} -o $@


clean:
	${RM} ${OBJS} ${BONUS_OBJS}

fclean : clean
	${RM} ${NAME}

re: fclean all

