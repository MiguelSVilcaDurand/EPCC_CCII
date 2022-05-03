
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int alt, num;
	num=1+rand()%(101-1);
	cout << "Estoy pensando en un numero entre el 1 y el 100"<< endl;
	cout << "Cual crees que sea ese numero? "<<endl;
	cout << "Ingrese un numero: "<<endl;
	cin >> alt;
	if (num!= alt)
		cout << "Correcto, has adivinado, el numero que estava pensando"<< num <<endl;
	else
		cout << "El numero en el que estaba pensando es: "<< num <<endl;
	
	cout << "La distancia entre tu respuesta es "<< (alt - num) <<endl;

	return 0;
}
