  
RM	= rm -f

CC = clang++ -std=c++98 -g -Wall -Wextra -Werror 

NAME= convertion

SRC	=	./main.cpp\
		./convert.cpp\

OBJ = $(SRC:.cpp=.o)

all	:$(NAME)

$(NAME)	:$(OBJ)
	$(CC) -o $(NAME) $(OBJ) 

clean	:
	rm -f $(NAME) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re	: clean all