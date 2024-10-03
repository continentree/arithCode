CC = gcc
CFLAGS = -W -Wall -Wextra -Wvla -O0
EXEC = prog
SRC=$(shell find ./src/internal/ -name '*.c')
OBJ=$(patsubst %.c, %.o, $(SRC))

all : $(EXEC)

$(EXEC) : $(OBJ)
	$(CC) $^ -o $@

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

mrproper : clean
	rm -rf $(EXEC)

