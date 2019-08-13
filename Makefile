CFLAGS += -Wall -Wextra -Wpedantic -std=c99

all:
	cc $(CFLAGS) -O2 -march=native -o bezier_curves main.c

debug:
	cc $(CFLAGS) -O2 -g -fsanitize=address,undefined,leak -o bezier_curves main.c
	
clean:
	rm -f *.o
