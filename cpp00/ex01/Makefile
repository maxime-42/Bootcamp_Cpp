RM	= rm -f

CC = g++ -std=c++98 -g -Wall -Wextra -Werror 

NAME= phonebook

SRC	=	./main.cpp\
		./Phonebook.cpp\

OBJ = $(SRC:.cpp=.o)

all	:$(NAME)

$(NAME)	:$(OBJ)
	$(CC) -o $(NAME) $(OBJ) 

clean	:
	rm -f $(NAME) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re	: clean all