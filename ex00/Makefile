NAME = template

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SOURCES = main.cpp
OBJECTS = $(SOURCES:.cpp=.o)

.cpp:.o
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(OBJECTS) made"

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
	@echo "$(NAME) made"

clean:
	@$(RM) $(OBJECTS)
	@echo "$(OBJECTS) removed"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(NAME) removed"

re: fclean all

run: all clean

.PHONY: all clean fclean re run
