#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	cout << "Introduzca tres numeros" << endl;
	float numero1,numero2,numero3;  //Se declaran tres variables con float ya que los numeros pueden ser decimales
	cin >> numero1>>numero2>>numero3;
	if (numero1 >numero2 && numero1>numero3){  //Si el primero numero introducido es mayor que el segundo y que el tercero se ejecuta esta accion que muestra que el primero numero es el mayor
	cout << "El numero mayor es " << numero1 << endl;
	}
	else if (numero2 >numero1 && numero2>numero3){  //Si el segundo numero introducido es mayor que el primero y que el tercero se ejecuta esta accion que muestra que el segundo numero es el mayor
	cout << "El numero mayor es " << numero2 << endl;
	}
	else {  //Si ni el numero 1 ni el numero 2 son mas grandes que el numero 3 se ejecuta esta accion que mostrara en pantalla que el numero mayor es el 3
	cout << "El numero mayor es " << numero3 << endl;
	}
    system("pause");
}

