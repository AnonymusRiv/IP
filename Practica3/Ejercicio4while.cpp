#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
int numero;
int divisores=1;		//se declara la variable divisores que servira para saber que numero sera divisor
cout<<"Introduzca un numero para conocer sus divisores de orden ascendente"<<endl;
cin>>numero;
while(divisores<=numero){		//siempre que la variable divisores sea menor o igual al numero introducido se ejecutara este bucle
	if(numero%divisores==0){		//si el resto entre el numero y la variable divisores es cero, entonces el numero de la variable divisores sera un divisor del numero por lo que se ejecutara esta accion y se imprimira en pantalla
		cout<<divisores<<endl;
		}
	divisores+=1;		//se sumara uno a la variable divisores para saber todos sus divisores
	}
cout<<"Estos son sus divisores en orden ascendente"<<endl; 
    system("pause");
}

