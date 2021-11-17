#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	int numero;
	int contador=1;
	int resultado=1;
	cout<<"Introduzca el numero para calcuar su factorial"<<endl;
	cin>>numero;
	while(contador<=numero){		//se ejecuta este bucle hasta que la variable auxiliar contador sobrepase el numero introducido
	resultado=resultado*contador;  //para calcular el factorial se multiplican todos los numeros anteriores
	contador=contador+1;		//se suma 1 a la variable auxiliar
	}
	cout<<"El factorial de su numero es "<<resultado<<endl;
    system("pause");
}

