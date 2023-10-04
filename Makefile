

SUFFIXES: .cpp .h .o
	.cpp.o: ; g++ -c $*.cpp

all: BrazoRobotico fichero1

BrazoRobotico.o: BrazoRobotico.h BrazoRobotico.cpp

fichero1.o: fichero1.cpp BrazoRobotico.cpp

fichero1: fichero1.o BrazoRobotico.o

BrazoRobotico: BrazoRobotico.o

clean: 
	rm -f *.o fichero1 BrazoRobotico

test: all
	./BrazoRobotico
	./fichero1
