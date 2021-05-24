
RM	= rm -f

CC = clang++ -std=c++98 -g3 -Wall -Wextra -Werror 

NAME= array

SRC	=	./main.cpp\

OBJ = $(SRC:.cpp=.o)

all	:$(NAME)

$(NAME)	:$(OBJ)
	$(CC) -o $(NAME) $(OBJ) 

clean	:
	rm -f $(NAME) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re	: clean all