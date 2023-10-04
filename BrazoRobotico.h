//Archivo.h
//
//

#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

#include<iostream>
using namespace std;

class BrazoRobotico{ 
	private:
	       	double x;
	       	double y;
	       	double z;
	       	bool objeto;
       	public:
	       BrazoRobotico();
       		double getX();
		double getY();
		double getZ();
		bool get_objeto();
		void coger();
		void soltar();
		void mover(double, double, double);		

};

#endif
