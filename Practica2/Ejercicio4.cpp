#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	int numero;
	int suma=0;
	int contador=0;
	cout<<"Introduzca un numero impar"<< endl;
	cin>>numero;
	while(contador<=numero){		//siempre que el contador sea menor o igual que el numero que introducimos se ejecutara este bucle
		if (numero%2==0){		//si el numero que introducimos es par no nos sirve ya que queremos que sea impar para calcular la suma de los impares anteriores
		cout<<"ERROR, introduzca un numero impar"<<endl;
		contador=numero+1;		//para detener ell programa hacemos que el numero de al varible auxiliar sea mayor que el numero introducido
		}
	else{		//si el numero que introducimos es impar entonces se ejecutara esta accion
		contador=contador+1;		//se suma 1 a la variable auxiliar contador
		if(contador%2!=0){		//si la variable contador es impar se ejecuta esta accion
			suma=suma+contador;		//se suman los numeros que sean impares hasta llegar al numero indicado
			}
		}
	}
	cout<<"La suma de los numero impares es "<<suma<<endl;

    system("pause");
}

