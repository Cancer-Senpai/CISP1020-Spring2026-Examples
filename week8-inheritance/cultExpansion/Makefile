CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

all: cultExe

cultExe: main.o lamb.o bee.o follower.o
	$(CXX) main.o lamb.o bee.o follower.o -o cultExe

main.o: main.cpp lamb.h bee.h follower.h
	$(CXX) $(CXXFLAGS) -c main.cpp

lamb.o: lamb.cpp lamb.h follower.h
	$(CXX) $(CXXFLAGS) -c lamb.cpp

bee.o: bee.cpp bee.h follower.h
	$(CXX) $(CXXFLAGS) -c bee.cpp

follower.o: follower.cpp follower.h
	$(CXX) $(CXXFLAGS) -c follower.cpp

clean:
	rm -f *.o *.gch cultExe
