SRCS	= ft_atoi.c ft_isalpha.c ft_memchr.c ft_strchr.c ft_strlen.c ft_tolower.c ft_bzero.c ft_isascii.c ft_memcmp.c ft_strdup.c ft_strncmp.c ft_toupper.c ft_calloc.c ft_isdigit.c ft_memcpy.c ft_strlcat.c ft_strnstr.c ft_isalnum.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_strrchr.c

NAME	= libft.a

OBJS	= ft_atoi.o ft_isalpha.o ft_memchr.o ft_strchr.o ft_strlen.o ft_tolower.o ft_bzero.o ft_isascii.o ft_memcmp.o ft_strdup.o ft_strncmp.o ft_toupper.o ft_calloc.o ft_isdigit.o ft_memcpy.o ft_strlcat.o ft_strnstr.o ft_isalnum.o ft_isprint.o ft_memset.o ft_strlcpy.o ft_strrchr.o

HEADERS	= ./

.c.o	:
		gcc -Wall -Wextra -Werror -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
		ar rc ${NAME} ${OBJS}

all : ${NAME}


clean :
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}

re : fclean all
