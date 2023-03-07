programa: func.o main.o
	gcc programa.o matriz.o -o matriz.exe

func.o: matriz.c matriz.h
	gcc -c matriz.c -o matriz.o

main.o:
	gcc -c programa.c -o programa.o

run:
	./matriz.exe

clean:
	rm matriz.exe
	rm matriz.o
	rm programa.o