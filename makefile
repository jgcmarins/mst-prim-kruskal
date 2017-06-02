# compiler name
CPP=g++

# flags
F=-Wall -std=c++11

# binary file
BIN=./build/mst.app

# headers
H=./src/headers

# main
MAIN=./src/main.cpp

# libraries
LIB=

all: clean compile
clean:
	rm -rf build
	mkdir build
compile:
	$(CPP) $(F) -o $(BIN) -I$(H) $(MAIN) $(LIB)
run:
	$(BIN)
valgrind:
	valgrind $(BIN)
