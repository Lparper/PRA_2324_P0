//Brazo robótico
//
#include "BrazoRobotico.h"
#include <iostream>
using namespace std;

BrazoRobotico::BrazoRobotico(){
			x=0;
			y=0;
			z=0;
			objeto=false;
		}
	
double BrazoRobotico:: getX(){
		return x;
		}

double BrazoRobotico:: getY(){
		return y;
		}	

double BrazoRobotico:: getZ(){
		return z;
		}

bool BrazoRobotico:: get_objeto(){
		return objeto;
		}

void BrazoRobotico:: coger(){
			objeto = true;
		}

void BrazoRobotico:: soltar(){
			objeto = false;
		}

void BrazoRobotico:: mover(double a, double b, double c){
		 x = x + a;
		 y = y + b;
		 z = c + z;
		}



