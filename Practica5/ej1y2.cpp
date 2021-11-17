#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void lee(float v[], int n){		//se crea una funcion que servira para darle valores a los distintos elementos del vector
	int numero;
	for(int i=0; i<n; i++){		//para poder llenar todos los elementos se hace un bucle q se ejecutara desde 0 hasta el tamaño del vector -1
		cout<<"Escribe el valor del elemento "<<i<<endl;
		cin>>numero;
		v[i]=numero;		//se le da al elemento i del vector el valor introducido
		}
	}

void imprime(float v[], int n){		//se crea esta funcion para que nos muestre los valores introducidos anteriormente del vector
	for(int i=0; i<n; i++){		//para poder abarcar todos los valores del vector se ejecuta este bucle
		cout<<"El valor del termino "<<i<<" es "<<v[i]<<endl;
		}
	}

int main(){
	int n;
	cout<<"Escribe el tamaño del vector"<<endl;
	cin>>n;
	float v[n];
	lee(v, n);
	imprime(v, n);

    system("pause");
}

