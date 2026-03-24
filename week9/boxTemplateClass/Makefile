CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

all: boxExe

boxExe: main.o
	$(CXX) main.o -o boxExe

main.o: main.cpp box.h
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm -f *.o *.gch boxExe