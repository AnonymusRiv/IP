#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	cout<<"Introduzca el valor hasta el cual sumar"<<endl;
	int numero;
	int suma=0;
	int contador=1;
	cin>>numero;
	while(contador<=numero){		//cuando el contador valga mas del numero introducido se ejecuta este bucle
	suma=suma+contador;		//la suma sera de todos los numeros a partir del 0 hasta el numero incluido
	contador=contador+1;		//sumamos 1 a una variable auxiliar que nos ayuda para saber todos los numeros que hay hasta el que introducimos
	}
	cout<<"La suma es " <<suma<<endl;

    system("pause");
}

