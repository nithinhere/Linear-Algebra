XX=g++

all: Vector.o Matrix.o LinearSystems.o testls0


testls0: Vector.h Vector.cpp Matrix.h Matrix.cpp LinearSystem.h LinearSstems.cpp test.cpp
        $(CXX) test.cpp Vector.cpp Matrix.cpp LinearSstems.cpp -o testls0

clean:
        rm -f *.o testls0
