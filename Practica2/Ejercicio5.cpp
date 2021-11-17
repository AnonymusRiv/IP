#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	int numero;
	int divisor=1;
	cout<<"Introduce un numero para saber sus divisores en orden ascendente"<<endl;
	cin>>numero;
	while(divisor<=numero){		//si la variable divisor es menor o igual que el numer introduciso se ejecutara este bucle
		if(numero%divisor==0){		//si el resto es cero significa que el numero de la variable divisor es un divisor de dicho numero asi que se imprimira en pantalla
		cout<<divisor<<endl;
		}
	divisor=divisor+1;		//la variable se sumara para averiguar todos los divisores que tenga el numero introducido en orden ascendente
	}
	cout<<"Esos son sus divisores de orden ascendente"<<endl;
    system("pause");
}

