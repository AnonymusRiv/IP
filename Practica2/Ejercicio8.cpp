#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	int numero;
	int a=1, b=1, n=2;
	cout<<"Introduce un numero"<<endl;
	cin>>numero;
	cout<<"Los "<<numero<<" primeros numeros son"<<endl;
	if(numero<1){		//si introducimos un numero menor que uno no hay ninguna sucesion puesto que no existiria
		cout<<"Introduxca un numero mayor que 0"<<endl;
		}
	else{			//si el numero que introducimos es mayor o igual que 1 se ejecutara esta accion
		cout<<a<<endl;		//se imprimira el valor de a puesto que el primer numero de la sucesion es 1
		if(numero>1){			//si el numero que hemos introducido es mayor que 1 se ejecutara esta accion
			while(numero>=n){		//se ejecutara este bucle hasta que la variable n sea mayor que el numero introducido
				cout<<b<<endl;		//se imprime el valor que valga b que sera la variable que nos de los resultados
				b=b+a;		//para obtener el siguiente termino se sumaran los dos anteriores 
				a=b-a;		//para obtener el valor anterior de b se resta el valor actual de b y se le restara el de a para obtenerlo para utilizarlo en la sucesion del proximo numero
				n++;		//se sumara 1 a esta variable para hacer que llegue hasta el numero de la sucesion que hemos introducido
				}
			}
		}

    system("pause");
}

