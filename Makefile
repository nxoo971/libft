SRCS	= ft_atoi.c ft_isalpha.c ft_memchr.c ft_strchr.c ft_strlen.c ft_tolower.c ft_bzero.c ft_isascii.c ft_memcmp.c ft_strdup.c ft_strncmp.c ft_toupper.c ft_calloc.c ft_isdigit.c ft_memcpy.c \
			ft_strlcat.c ft_strnstr.c ft_isalnum.c ft_isprint.c ft_memset.c ft_memmove.c ft_strlcpy.c ft_strrchr.c ft_substr.c ft_split.c ft_strjoin.c

NAME	= libft.a

OBJS	= ${SRCS:.c=.o}

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
