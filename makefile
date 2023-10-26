main: main.c fila.c fila.h
	gcc -o main main.c fila.c

clean:
	rm -rf main

exec:
	gcc -o main main.c fila.c
	./main
run :
	./main
