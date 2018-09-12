all: main

main.o: main.cpp dinnerplan.h
	g++ -c main.cpp
	
dinnerplan.o: dinnerplan.cpp dinnerplan.h
	g++ -c dinnerplan.cpp
	
main:	dinnerplan.o main.o
	g++ -o main main.o dinnerplan.o