all: main

main.o: main.cpp countTimesRan.h
	g++ -c main.cpp
	
countTimesRan.o: countTimesRan.cpp countTimesRan.h
	g++ -c countTimesRan.cpp
	
main:	countTimesRan.o main.o
	g++ -o main main.o countTimesRan.o