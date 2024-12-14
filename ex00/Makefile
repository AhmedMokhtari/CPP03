NAME = Open

SRC_O = main.o ClapTrap.o

CPPFLAG = -Wall -Wextra -Werror -std=c++98


all : $(NAME)


$(NAME) : $(SRC_O)
	c++ $(CPPFLAG) $(SRC_O) -o $(NAME)

%.o : %.cpp ClapTrap.hpp
	c++ -c $(CPPFLAG) $< -o $@

clean :
	rm -rf $(SRC_O)

fclean : clean
		rm -rf $(NAME)
	
re : fclean all


