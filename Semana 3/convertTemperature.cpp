#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int seg,min,hor;
	cout<<"ingrese un numero";
	cin >> seg;
	min = seg / 60;
	hor = min / 60;
	cout << seg << " es equivalente a: " << int(hor) << " hor " << int(min%60) << " minutos y " << int(seg%60) << " segundos.";
	return 0;
}

