sort: lib/sort.o main.c
	gcc -o sort main.c lib/sort.o

lib/sort.o: lib/sort.c
	gcc -c lib/sort.c -o lib/sort.o
