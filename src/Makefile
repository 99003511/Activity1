.PHONY: clean build run
NAME = main

INC = -Iinclude

SRC = src/bits.c\
src/func.c\
src/mystring.c\
src/main.c

build:
        gcc $(SRC) $(INC) -o $(NAME).out

run:
        ./$(NAME).out

clean:
        rm*.out
