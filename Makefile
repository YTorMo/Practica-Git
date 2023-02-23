NAME			=	HAL
CFLAGS			=	-Wall -Werror -Wextra
USER			=	ytoro-mo

HEADERS			=	calculator.h
SRCS			=	$(shell find . -iname "*.c")
OBJS			=	${SRCS:.c=.o}


BOLD	= \033[1m
GREEN	= \033[32;1m
RESET	= \033[0m

all: $(NAME)

$(NAME): $(SRCS) $(OBJS) $(HEADERS)
	@cc $(CFLAGS) $(SRCS) -o $(NAME)

%.o: %.c
	@cc $(CFLAGS) -c $< -o $@ && printf "${GREEN}$(BOLD)\rCompiling: $(notdir $<)\r\e[35C[OK]\n$(RESET)"

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME) $(NAME_BONUS)
	
re: fclean all

.PHONY: all, clean, fclean, re
