RM	= rm -f

CC = clang++ -std=c++98 -g -Wall -Wextra -Werror 

NAME= megaphone

SRC	=	./megaphone.cpp\

OBJ = $(SRC:.cpp=.o)

all	:$(NAME)

$(NAME)	:$(OBJ)
	$(CC) -o $(NAME) $(OBJ) 

clean	:
	rm -f $(NAME) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re	: clean all
