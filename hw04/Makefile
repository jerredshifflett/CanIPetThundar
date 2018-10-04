all: main

main.o: main.cpp readppm.h
	g++ -c main.cpp
	
readppm.o: readppm.cpp readppm.h
	g++ -c readppm.cpp
	
main:	readppm.o main.o
	g++ -o main main.o readppm.o