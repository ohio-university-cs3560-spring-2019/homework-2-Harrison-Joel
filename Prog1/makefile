C = g++

prog1: ReadWrite.a prog1.o
	$(C) -o prog1 prog1.o lib/ReadWrite.a

prog1.o: ReadWrite.a
	$(C) -c src/prog1.cc 

ReadWrite.a: ReadWrite.o 
	ar rcs lib/ReadWrite.a ReadWrite.o

ReadWrite.o:
	$(C) -I ./include/ReadWrite.h -c src/ReadWrite.cc

clean:
	rm *.o prog1