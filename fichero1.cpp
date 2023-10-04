//
//
//Implementa en C++, con Vim, una función main() que cree una instancia de la clase BrazoRobotico, que lo mueva, y que coja un objeto, mostrando información por pantalla. 
//Defínela en un fichero .cpp independiente al de la clase. 
//

#include "BrazoRobotico.h"

int main(){
	BrazoRobotico brazo;
	cout << "tengo objeto= \n" << brazo.get_objeto();
	cout << "cojo objeto\n";

	brazo.coger();
	cout << "tengo objeto= \n" << brazo.get_objeto();

	brazo.soltar();
	cout << "tengo objeto= \n" << brazo.get_objeto();


	cout << "Posición actual: " <<"( X= "<<brazo.getX()<<", Y= "<<brazo.getY()<<", Z= "<<brazo.getZ()<<")\n";
	cout << "Me muevo";
	brazo.mover(2.0,4.1,3.2);

        cout << "Posición actual: " <<"( X= "<<brazo.getX()<<", Y= "<<brazo.getY()<<", Z= "<<brazo.getZ()<<")\n";

	return 0;
}


