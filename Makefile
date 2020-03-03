# 
CXX = g++
OBJECTS= main.o brute.o
CXXFLAGS = -std=c++11 -c -g -Wall -s

# all compiles both files and then links the object files to build the hash exe
all: $(OBJECTS)
	$(CXX) $(OBJECTS) -o short
	
# creates the main object file
main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp
	
# creates the brute object file
brute.o: brute.cpp
	$(CXX) $(CXXFLAGS) brute.cpp

clean:
	$(RM) *o short
