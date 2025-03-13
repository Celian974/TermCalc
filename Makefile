CC     = gcc

CFLAGS = -Iinclude -Wall -Wextra

SRC    = src/main.c\
		 src/get_operator.c\
		 src/get_first_number.c\
		 src/get_second_number.c\
		 src/add.c\
		 src/substract.c\
		 src/multiply.c\
		 src/apply_operation.c\
		 src/termcolors/white.c\
		 src/termcolors/red.c\
		 src/termcolors/blue.c\
		 src/termcolors/purple.c\
		 src/termcolors/cyan.c\
		 src/termcolors/yellow.c\
		 src/termcolors/reset.c

OBJ    = $(SRC:.c=.o)

EXE    = termcalc

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) -o $(EXE) $(OBJ) $(CFLAGS)

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -f src/*.o
	rm -f src/termcolors/*.o

fclean: clean
	rm -f $(EXE)

re: fclean all
