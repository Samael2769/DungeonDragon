##
## EPITECH PROJECT, 2022
## Untitled (Workspace)
## File description:
## Makefile
##

SRC_DIR	=	./src/

TEST_DIR	=	tests/

LIB_DIR	=	lib/sm_libc/

SRC_FILES	=\

SRC_FILES_MAIN	=	main.cpp\
					1_Characters/Enchanter.cpp\
					1_Characters/Knight.cpp\
					1_Characters/Paladin.cpp\
					1_Characters/Peasant.cpp\
					1_Characters/Priest.cpp\
					2_Mobs/Dragon.cpp\
					2_Mobs/Goblin.cpp\
					3_Items/HealthPotion.cpp\
					3_Items/PoisonPotion.cpp\
					3_Items/PowerPotion.cpp\
					4_Gameplay/combat.cpp\

TEST_FILES	=\

SRC	=	$(addprefix $(SRC_DIR), $(SRC_FILES))

SRC_TEST	=	$(addprefix $(TEST_DIR), $(TEST_FILES))

SRC_MAIN	=	$(addprefix $(SRC_DIR), $(SRC_FILES_MAIN))

OBJ	=	$(SRC:.cpp=.o)

OBJ_MAIN	=	$(SRC_MAIN:.cpp=.o)

##############################################################

CFLAGS	=	-W -Wall -Wextra

CPPFLAGS	=	-I./includes/1_Characters -I./includes/2_Mobs -I./includes/3_Items -I./includes/4_Gameplay

LDFLAGS	=	-L./

LDLIBS	=	-lsm_libc

TEST_LIB	=	--coverage -lcriterion -lgcov

##############################################################

CC	=	g++

PRNT	=	echo

COVERAGE	= gcovr

TEST_NAME	=	unit_test

NAME = DungeonDragons


##############################################################

all: $(NAME)

$(NAME): $(OBJ) $(OBJ_MAIN)
	@$(PRNT) -e "\e[0;31m Compiling ${NAME}... \e[0m"
	$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN)

make_lib:
	@$(PRNT) -e "\e[0;31m Making lib $(LIB_DIR)... \e[0m"
	$(MAKE) -C $(LIB_DIR)

clean:
	@$(PRNT) -e "\e[0;31m Deleting .o and .gc objects... \e[0m"
	$(RM) $(OBJ) $(OBJ_MAIN)
	$(RM) *.gc*

fclean: clean
	@$(PRNT) -e "\e[0;31m Deleting execs... \e[0m"
	$(RM) $(NAME) $(TEST_NAME)

unit_test: fclean make_lib
	@$(PRNT) -e "\e[0;31m Compiling tests for $(NAME)... \e[0m"
	$(CC) -o $(TEST_NAME) $(SRC) $(SRC_TEST) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS) $(TEST_LIB)

tests_run: unit_test
	@$(PRNT) -e "\e[0;31m Running tests for $(NAME)... \e[0m"
	./$(TEST_NAME)
	$(COVERAGE) --exclude $(TEST_DIR)
	$(COVERAGE) -b --exclude $(TEST_DIR)

re: fclean $(NAME)

.PHONY:	all make_lib clean fclean unit_test tests_run re