CC     = gcc

CFLAGS = -Iinclude -Wall -Wextra

SRC    = src/main.c\
		 src/get_operator.c\
		 src/get_first_number.c\
		 src/get_second_number.c\
		 src/add.c

OBJ    = $(SRC:.c=.o)

EXE    = termcalc

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) -o $(EXE) $(OBJ) $(CFLAGS)

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -f src/*.o

fclean: clean
	rm -f $(EXE)

re: fclean all
