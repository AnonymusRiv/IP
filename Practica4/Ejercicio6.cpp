#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;


int combinaciones(int a, int b){		//declaramos la funcion combinaciones para saber las combinaciones del primero sobre el segundo
int n=1;		//declaramos las variables
int k=1;
int resta=1;
int solucion=0;
	for(int i=1;i<=a;i++){		//siempre que la variable auxiliar i valga menos o igual que a se ejecutara este bucle
		n=n*i;		//para calcular el factorial se multiplica el numero por todos los valores hasta llegar a el
		}
	for(int i=1;i<=b;i++){		//siempre que la variable auxiliar i valga menos o igual que b se ejecutara este bucle
		k=k*i;		//para calcular el factorial se multiplica el numero por todos los valores hasta llegar a el
		}
	for(int i=1;i<=(a-b);i++){		//siempre que la variable auxiliar i valga menos o igual que la diferencia entre a menos b se ejecutara este bucle
		resta=resta*i;		//para calcular el factorial se multiplica el numero por todos los valores hasta llegar a el
		}
	solucion=n/(k*resta);		//para saber la combinacion tenemos q dividir el factorial n entre el producto del factorial de k por el factorial de la resta de n menos k
	return solucion;		//devolveremos la solucion de la variable solucion
}

int main(){
int a, b;
cout<<"Introduce un numero para calcular la combinacion del primero sobre el segundo"<<endl;
cin>>a;
cin>>b;
int respuesta=combinaciones(a,b);		//declaramos una variable que valga el valor de la funcion combinaciones para los valores introducidos anteriormente 
cout<<"La combinacion de "<<a<<" sobre "<<b<<" es"<<endl;
cout<<respuesta<<endl;

    system("pause");
}

