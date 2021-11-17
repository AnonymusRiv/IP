#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	int numero=0;
	int i=1, divisores=0;
	cout<<"Introduzca un numero para saber si es primo o no"<<endl;
	cin>>numero;
	while(i<=numero){		//si la variable es menor o igual que el numero introducido se ejecutara este bucle
		if(numero%i==0){		//si el resto entre el numero introducido y la variable i es cero entonces i es divisor del numero
			divisores=divisores+1;		//si es divisor de sumara uno a esta variable
			}
		i=i+1;		//se sumara uno a esta variable para poder averiguar todos los divisores que tenga el numero que hemos introducido
		}
	if(divisores==2 || divisores==1){		//si los divisores del numero que hemos introducido es igual a uno o dos eso significa que el numero es primo
		cout<<"El numero es primo"<<endl;
		}
	else{		//si tiene mas divisores el numero sera par
		cout<<"El numero no es primo"<<endl;
		}
    system("pause");
}

