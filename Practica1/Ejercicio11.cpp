#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	cout << "Introduzca dos numeros enteros" << endl;
	int a,b,c;  //Se declaran tres variables enteras ya que pide numeros enteros, dos son para introducir valores y la otra es auxiliar
	cin >> a >> b;
	if (a>b) {  //Si el primer numero introducido es mayor que el segundo se ejecuta esta accion
	c=a;  //Se le da a la variable auxiliar c, el valor de a
	a=b;  //Se le da a la variable a que es la del primero numero el valor del b dado que este es el menor y tiene que estar en la variable a
	b=c;  //Se le da a la variable b el valor de c que es el valor de a que al ser mayor tiene que estar en la variable b para imprimirlo en pantalla
	cout << "El numero menor es " << a << endl;
	cout << "El numero mayor es " << b << endl;
	}
	else if (a==b){  //En caso de que el primer numero introducido sea igual que el segundo saltara un aviso en la pantalla diciendo que los dos numeros son iguales
	cout << "Los dos numeros introducidos son iguales" << endl;
	}
	else{  //Si por el contrario el valor de a es el menor y el de b el mayor, se quedaran tal y como estan y se mostara asi en pantalla
	cout << "El numero menor es " << a << endl;
	cout << "El numero mayor es " << b << endl;
	}
	

    system("pause");
}

