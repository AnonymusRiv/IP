#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	cout << "Introduzca un numero entero" << endl;
	int numero;  //Se declara la variable entera ya que nos pide un numero entero
	cin >> numero;
	if (numero > 0){  //En caso de que el numero introducido sea mayor que cero se ejecuta esta accion que muestra que el numero es mayor que cero
		cout << "El numero introducido es mayor que cero" << endl;
	}
	else if (numero < 0){  //En caso de que el numero introducido sea menor que cero se ejecuta esta accion que muestra que el numero es menor que cero
		cout << "El numero introducido es menor que cero" << endl;
	}
	else {  //Si el numero no es ni mayor ni menor que cero, es porque el numero introducido es el cero y por tanto se ejecutara esta accion que muestra que el numero introducido es el cero
		cout << "El numero introducido es cero" << endl;
	}

    system("pause");
}

