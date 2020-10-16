all: main

main: sort.o
	gcc main.c sort.o -o main

sort.o:
	gcc -c sort.c
	
rm:
	rm *.o