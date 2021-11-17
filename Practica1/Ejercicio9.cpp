#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	cout << "Introduzca el mes con un numero entero" << endl;
	int mes;  //Se declara una variable de tipo entero ya que el numero introducido correspondra con un mes
	cin >> mes;
	if (mes>= 1 && mes<=12){  //Si el numero introducido es mayor o igual que 1 y menor o igual que 12 se ejecuta este programa que mostrara los dias que tiene el mes
		if (mes == 1 || mes ==3 || mes==5 || mes == 7 || mes ==8 || mes==10 || mes==12){  //Si el numero es igual a 1, 3, 5, 7, 8, 10 o 12 el mes tendra 31 dias y esto se mostrara en pantalla
		cout << "Este mes tiene 31 dias" << endl;
		}
		else if (mes==2){  //Si el numero introducido es un 2 entonces el mes tendra 28 dias principalmente ya que se trata de febrero
		cout << "Este mes tiene 28 dias" << endl;
		}	
		else {  //Si el numero introducido no es ninguno de esos entonces el mes tendra 30 dias que son el resto y esto se mostrara en pantalla
		cout << "Este mes tiene 30 dias" << endl;
		}
	}
	else {  //Si el numero es menor de 1 o mayor de 12 el numero no es valido y saltara un mensaje de error
 cout << "El numero introducido no es valido" << endl;
	}
    system("pause");
}

