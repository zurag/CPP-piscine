NAME		= Interface

SRCS		= main.cpp Ice.cpp Cure.cpp Character.cpp Amateria.cpp MateriaSource.cpp

OBJS		= $(SRCS:.cpp=.o)

CC			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98


.c.o:
		$(CC) $(FLAGS) -c $< -o ${<:.cpp=.o}

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)
