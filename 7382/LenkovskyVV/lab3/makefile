all: hello

hello: main.o
	g++ main.o

main.o: ./Source/main.cpp ./Source/Queue.h ./Source/Stack.h
	g++ -c ./Source/main.cpp
