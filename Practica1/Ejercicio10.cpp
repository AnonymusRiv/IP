#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	cout << "Introduzca un numero entero" << endl;
	int numero,resto;  //Se declaran las dos variables enteras ya que el numero tiene que ser un numero entero y el resto en ese caso tambien lo sera
	cin >> numero;
	resto=numero%2;  //Para saber si un numero es par o no tendremos q hacer su division entre dos y si el resto es 0 entonces el numero es par y si es distinto a 0, el numero es impar y para eso averiguamos el resto y lo incluimos en la variable resto
	if (resto==0){  //Si el resto es 0 significa que el numero es par y se mostrara en pantalla
	cout << "El numero es par" << endl;
	}
	else{  //Si el resto es distinto de 0 significa que no es par y por lo tanto sera impar y esto es lo que se mostrara en pantalla
	cout << "El numero es impar" << endl;
	}
    system("pause");
}

