#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	float area,radio;  //se declaran las variables con float dado que el radio puede ser decimal y el area al multiplicarlo por pi tambien
	cout << "Introduzca el valor del radio de la circunferencia para averiguar su area" << endl;
	cin >> radio;  //se introduce el numero que se almacena en la variable radio
	area=radio*radio*3.1415;	//para calcular el area se utiliza la formula de radio al cuadrado por pi y se almacena en la variable area
	cout << "El area de su circunferencia de radio " << radio << " es" << endl;
	cout << area << endl;  //se imprime el valor de la variablle radio
    system("pause");
}

