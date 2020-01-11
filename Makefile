CC := gcc
FLAGS := -Wall -std=c99

example: example.o
	${CC} ${FLAGS} -o $@ $^

phony: clean
clean:
	rm *.o
	rm ./example
	