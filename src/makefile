all: main

main: main.o adjacency_matrix.o node.o algorithms.o
	g++ -std=c++11 -o main main.o adjacency_matrix.o algorithms.o node.o

adjacency_matrix.o: adjacency_matrix.cpp
	g++ -std=c++11 -c adjacency_matrix.cpp

node.o: node.cpp
	g++ -std=c++11 -c node.cpp

algorithms.o: algorithms.cpp
	g++ -std=c++11 -c algorithms.cpp

clean:
	rm *.o main

