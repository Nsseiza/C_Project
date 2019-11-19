all: App

App: main.o
	gcc main.o -o App

main.o: main.c
	gcc -c main.c 

.Phony:clean
clean:
	rm *.o


