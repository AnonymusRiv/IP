#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int numero;
    int mayor=0;		//se declara la variable que registrara el numero mayor introducido
    cout<<"Introduzca un numero"<<endl;
    cin>>numero;
    for(; numero>=0; cin>>numero) {		//siempre que el numero introducido sea mayor o igual que cero se ejecuta este bucle y al final de este se introducira un nuevo valor para este
        if (numero>mayor) {		//si el numero es mayor que el de la variable mayor se ejecutara esta accion
            mayor=numero;		//se cambiara el valor de la variable mayor debido a que el numero es mayor
        }
    }
    cout<<"El numero mayor es "<< mayor<<endl;
    system("pause");
}

