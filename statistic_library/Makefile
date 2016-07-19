
all: lib main

lib:
	gcc -c -o eye.o eye.c
	gcc -c -o head.o head.c
	gcc -c -o mouse.o mouse.c
	ar rcs libshow.a eye.o head.o mouse.o

main:
	gcc main.c -L. -lshow
	#gcc -c -o main.o main.c
	#gcc -o a.out main.o -L. -lshow

clean:
	rm *.o libshow.a a.out
