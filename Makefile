all: startApp

startApp: main.o
	gcc main.o -o startApp

main.o: main.c
	gcc -c main.c 

.Phony:clean
clean:
	rm *.o 


