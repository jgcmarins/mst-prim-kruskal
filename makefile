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
LIB=./src/lib/input_reader.cpp ./src/lib/vertex.cpp ./src/lib/edge.cpp ./src/lib/graph.cpp ./src/lib/mst.cpp

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
run3:
	$(BIN) 3
valgrind3:
	valgrind $(BIN) 3
run7:
	$(BIN) 7
valgrind7:
	valgrind $(BIN) 7
runprim7:
	$(BIN) 7 > out/prim_classes.txt
