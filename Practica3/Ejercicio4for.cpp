#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
int numero;
cout<<"Introduzca un numero para saber sus divisores en orden ascendente"<<endl;
cin>>numero;
for(int divisores=1; divisores<=numero; divisores++){		//se declara la variable divisores y si esta es menor o igual que el numero se ejecutara este bucle y se ira incrementando en uno cada vez que que se ejecute 
	if(numero%divisores==0){		//si el resto entre el numero y la variable divisores es cero, entonces el numero de la variable divisores sera un divisor del numero por lo que se ejecutara esta accion y se imprimira en pantalla
		cout<<divisores<<endl;
		}
	}
cout<<"Estos son sus divisores en orden ascendente"<<endl;
    system("pause");
}

