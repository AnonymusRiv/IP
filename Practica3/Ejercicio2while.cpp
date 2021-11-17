#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int numero;
    int mayor=0;		//se declara la variable que registrara el numero mayor introducido
    cout<<"Introduce un numero"<<endl;
    cin>>numero;
    while(numero>=0) {		//siempre que el numero sea mayor o igual que cero se ejecutara este bucle
        if(numero>mayor) {		//si el numero es mayor que la variable mayor se ejecutara esta accion
            mayor=numero;		//se cambiara el valor de la variable mayor debido a que el numero es mayor
        }
			cin>>numero;		//se introduciran numeros hasta que el numero introducido sea menor que 0
    }
		cout<<"El numero mayor es "<< mayor<<endl;
    system("pause");
}

