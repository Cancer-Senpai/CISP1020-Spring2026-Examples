CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

all: listExe

listExe: main.o book.o
	$(CXX) main.o book.o -o listExe

main.o: main.cpp book.h linkedlist.h iterator.h node.h
	$(CXX) $(CXXFLAGS) -c main.cpp

book.o: book.cpp book.h
	$(CXX) $(CXXFLAGS) -c book.cpp

clean:
	rm -f *.o *.gch listExe