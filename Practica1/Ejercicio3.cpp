#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>  //Se incluye esta libreria para poder utilizar el comando de raiz cuadrada (sqrt)

using namespace std;

int main(){
	float numero,raiz;  //Se declaran las variables con float para expresar mejor el resultado
	cout << "Introduzca un numero" << endl;
 	cin >> numero;
	if (numero >= 0){  //Se ejecutara esta accion si el numero introducido es mayor o igual que cero ya que no existen las raices de numeros negativos
		raiz=sqrt (numero);  //Se ejecuta la raiz del numero introducido y se almacena en la variable raiz para imprimirla en pantalla
		cout << "La raiz de dicho numero es " << raiz << endl;
		}
	else {  //Si el numero introducido es menor que cero se ejecutara esta accion
	cout << "El numero introducido no es valido, porque no existe la raiz de un numero negativo" << endl;
	}
    system("pause");
}

