# Compiler and flags
CC = gcc
CCFLAGS = -Wall -Wextra -Werror -I includes

# Directories
SRC_DIR = src
INC_DIR = includes
TEST_DIR = tests

# Source and objects
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(SRC_DIR)/%.o)
#TEST_SRCS = $(wildcard $(TEST_DIR)/*.c)
TEST_SRCS = $(TEST_DIR)/test_ft_strlen.c $(TEST_DIR)/main.c $(TEST_DIR)/test_runner.c
TEST_NAME = test_suite
NAME = libft.a

#Build binary
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: $(SRC_DIR)/%.c
	$(CC) $(CCFLAGS) -I $(INC_DIR) -c $< -o $@

# Build and run the tests
test: $(NAME)
	$(CC) $(CCFLAGS) $(TEST_SRCS) $(NAME) -o $(TEST_NAME)
	./$(TEST_NAME)

# Clean objects
clean:
	rm -f $(OBJS) $(TEST_NAME)

# Clean objects and binary
fclean: clean
	rm -f $(NAME)