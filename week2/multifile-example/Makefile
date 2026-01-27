
all: fishExe

fishExe: main.o fish.o
	gcc main.c fish.c -o fishExe

main: main.c fish.h
	gcc -c main.c

fish: fish.c fish.h
	gcc -c fish.c

clean:
	rm -rf *.o *.gch fishExe
