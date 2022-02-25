##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

NAME			= 		drag_drop

SRC 			= 		src/main.cpp 			\
\
						src/__sfml_lib__.cpp 	\

OBJ 			= 		$(patsubst %.cpp,%.o,$(SRC))

RM 				= 		rm -f

SFML_FLAGS		=		 -lsfml-graphics -lsfml-window -lsfml-system

CPPFLAGS		=   	-g3 -Wall -Wextra $(SFML_FLAGS) -I./include

all:		$(NAME)

$(NAME):	$(OBJ)
			@g++ -o $(NAME) $(OBJ) $(CPPFLAGS)

clean:
			@$(RM) $(TRASH)

fclean:		clean
			@$(RM) $(NAME)
			@$(RM) src/*.o
			@$(RM) $(OBJ)
			@$(RM) ../$(NAME)

re:			fclean all
