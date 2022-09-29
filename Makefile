SRCS	= ft_striteri.c ft_strtrim.c ft_strmapi.c ft_atoi.c ft_isalpha.c ft_memchr.c ft_strchr.c ft_strlen.c ft_tolower.c ft_bzero.c ft_isascii.c ft_memcmp.c ft_strdup.c ft_strncmp.c ft_toupper.c ft_calloc.c ft_isdigit.c ft_memcpy.c \
			ft_strlcat.c ft_strnstr.c ft_isalnum.c ft_isprint.c ft_memset.c ft_memmove.c ft_strlcpy.c ft_strrchr.c ft_substr.c ft_split.c ft_strjoin.c ft_itoa.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

GNL		= get_next_line.c get_next_line_utils.c

NAME	= libft.a

OBJS		= ${SRCS:.c=.o}

OBJS_BONUS	= ${BONUS:.c=.o}

OBJS_GNL	= ${GNL:.c=.o}

HEADERS	= ./

.c.o	:
		gcc -Wall -Wextra -Werror -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
		ar rcs ${NAME} ${OBJS}

all : ${NAME}

bonus	: $(OBJS) $(OBJS_BONUS)
		ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

gnl		: $(OBJS) $(OBJS_BONUS) $(OBJS_GNL)
		ar rcs $(NAME) $(OBJS) $(OBJS_BONUS) $(OBJS_GNL)
clean :
		rm -f ${OBJS} ${OBJS_BONUS} $(OBJS_GNL)

fclean : clean
		rm -f ${NAME}

re : fclean all
