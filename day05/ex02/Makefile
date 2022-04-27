NAME		= Form

SRCS		= main.cpp bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJS		= $(SRCS:.cpp=.o)

CC			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

.c.o:
		$(CC) $(FLAGS) -c $< -o ${<:.cpp=.o} -I

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:			all clean fclean re