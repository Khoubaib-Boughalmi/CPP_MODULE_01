NAME = harlTheCryBaby
CC = c++
CFLAGS = -std=c++98 -Wall -Werror -Wextra

SRCS =	main.cpp \
		Harl.cpp

%.o:%.cpp
		${CC} ${CFLAGS} -c $^ -o $@

OBJS = ${SRCS:.cpp=.o}

${NAME} :	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

clean:	
		${RM} ${OBJS} 
	
fclean:	clean
		${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
