# 
CXX = g++
OBJECTS= main.o Brute.o Genetic.o Matrix.o
CXXFLAGS = -std=c++11 -c -g -Wall -s

# all compiles both files and then links the object files to build the hash exe
all: $(OBJECTS)
	$(CXX) $(OBJECTS) -o short
	
# creates the main object file
main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp
	
#creates the genetic object file
Genetic.o: Genetic.cpp
	$(CXX) $(CXXFLAGS) Genetic.cpp

# creates the Matrix object file
Matrix: Matrix.cpp
	$(CXX) &(CXXFLAGS) Matrix.cpp

# creates the brute object file
Brute.o: Brute.cpp
	$(CXX) $(CXXFLAGS) Brute.cpp

clean:
	$(RM) *o short
