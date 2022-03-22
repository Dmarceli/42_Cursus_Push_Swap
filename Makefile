NAME	:=	push_swap

CC		:=	gcc
CFLAGS	:= -Wall -Wextra -Werror -fsanitize=address

PATH_SRC		:=	./src
PATH_INCLUDES	:=	./incs
PATH_BUILD		:= ./build
PATH_OBJS		:= $(PATH_BUILD)/objs

BIN				:=	./$(NAME)
SRCS			:= $(PATH_SRC)/algdistributor.c \
					$(PATH_SRC)/argparser.c \
					$(PATH_SRC)/main.c \
					$(PATH_SRC)/org3dig.c \
					$(PATH_SRC)/org5dig.c \
					$(PATH_SRC)/orgbigdig.c \
					$(PATH_SRC)/push_swap_utils.c \
					$(PATH_SRC)/push_swap_utils_1.c \
					$(PATH_SRC)/push_swap_utils_2.c \
					$(PATH_SRC)/pushmoves.c \
					$(PATH_SRC)/revrotatemoves.c \
					$(PATH_SRC)/rotatemoves.c \
					$(PATH_SRC)/swapmoves.c \

OBJ				:= $(subst .c,.o,$(subst $(PATH_SRC), $(PATH_OBJS), $(SRCS)))

all:$(BIN)

$(BIN): $(OBJ)
		@$(CC) $(CFLAGS) -o $(@) $^ -I$(PATH_INCLUDES)
		@printf "\033[44m[PUSH SWAP BUILT!]\033[0m\n"
		@cat incs/graphics/logo
		@cat incs/graphics/cred



$(PATH_OBJS)/%.o: $(PATH_SRC)/%.c | $(PATH_BUILD)
		@$(CC) $(CFLAGS) -c $(^) -o $@
		@printf "\033[36m[Building ${@F}]\033[0m\n"


$(PATH_BUILD):
		@mkdir -p $(PATH_BUILD)
		@mkdir -p $(PATH_OBJS) 

clean:
		@printf "\033[38;5;1m[Cleaning objects!]\033[0m\n"
		@rm -rf $(PATH_OBJS)

fclean: clean
		@printf "\033[38;5;1m[Cleaning Bin!]\033[0m\n"
		@rm -rf $(PATH_BUILD) $(NAME)

re: fclean all