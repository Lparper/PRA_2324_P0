

SUFFIXES: .cpp .h .o
	.cpp.o: ; g++ -c $*.cpp

all: BrazoRobotico

BrazoRobotico.o: BrazoRobotico.h BrazoRobotico.cpp
	
BrazoRobotico: BrazoRobotico.o

clean: 
	rm -f *.o app1 app2

test: all
	./BrazoRobotico
