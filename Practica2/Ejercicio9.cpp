#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	int numero;
	int suma=0;
	int n=2;
	cout<<"Introduzca un numero"<<endl;
	cin>>numero;
	while(numero>=n){		//siempre que el numero que hemos introducido sea mayor o igual que la variable n se ejecutara este bucle
		if(n%2==0||n%3==0){		//si la variable n es divisible entre 2 o 3 entonces se ejecutara esta accion
			suma=suma+n;		//se sumara los numeros que sean divibles entre 2 o 3
			}
		n++;		//la variable n se sumara 1 hasta llegar al numero que hemos introducido
		}
	cout<<"La suma es "<< suma<<endl;

    system("pause");
}

