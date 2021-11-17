#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	int numero, resultado;  //declaro las variables
	int veces=0;
	int suma=0;
	cout<<"Introduzca valores para averiguar su media"<<endl;
	cin>>numero;

	while(numero>0){  //siempre que el numero valga mayor que cero se ejecutara esto e introduciremos un numero negativo para averiguar la media de los numeros anteriores
		veces=veces+1;  //se suma una vez por cada numero introducido
		suma=suma+numero;	//se suma los valores introducidos
		cin>>numero;			//se introduce un nuevo numero

		}
	resultado=suma/veces;		//para calcular la media se divide la suma total entre las veces que hemos puesto un numero
	cout<<"La media es "<< resultado << endl;

    system("pause");
}

