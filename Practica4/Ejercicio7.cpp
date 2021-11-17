#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int ndivisores(int v){		//declaramos la funcion ndivisores para saber cuantos divisores tiene el numero
int n=0;
	for(int i=1;i<=v;i++){		//siempre que la variable auxiliar i valga menos o igual que el numero se ejecutara este bucle
		if(v%i==0){		//si el resto del numero entre la variable auxiliar es cero se ejecutara esta accion
			n+=1;
			}
}
	return n;		//devolvera el valor de la variable n que sera el numero de divisores que tenga
}

int main(){
int numero;
cout<<"Introduzca un numero para saber cuantos divisores tiene"<<endl;
cin>>numero;
int respuesta=ndivisores(numero);		//se declara una variable que tendra el valor de la funcion ndivisores cuando valga el numero introducido
cout<<"El numero "<<numero<<" tiene "<<respuesta<<" divisores"<<endl;

    system("pause");
}

