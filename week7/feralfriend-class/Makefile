CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

all: friendExe

friendExe: main.o feralfriend.o
	$(CXX) main.o feralfriend.o -o friendExe

main.o: main.cpp feralfriend.h
	$(CXX) $(CXXFLAGS) -c main.cpp

feralfriend.o: feralfriend.cpp feralfriend.h
	$(CXX) $(CXXFLAGS) -c feralfriend.cpp

clean:
	rm -f *.o *.gch friendExe