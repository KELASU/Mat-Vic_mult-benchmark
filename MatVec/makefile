all: mylib.o main.o 
	gcc -o main_test.out main_test.c mylib.o main.o
	gcc -o main_b_space.out main_b_space.c mylib.o main.o
	gcc -o main_b_time.out main_b_time.c mylib.o main.o

test:
	./main_test.out

space:
	./main_b_space.out

time:
	./main_b_time.out

mylib.o:
	gcc -o mylib.o -c mylib/mylib.c

main.o:
	gcc -o main.o -c main.c

clear:
	rm -rf *.o *.out *.exe