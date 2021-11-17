#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ctime>		//se añadira esta libreria para averiguar el numero secreto
using namespace std;

int main() {
    srand(time(0));		//se utiliza para poder calcular el nuemero aleatorio
    int secreto=rand()%1001;		//se declara el numero secreto y se le da un numero aleatorio entre el 0 y el 1000

    int numero;
    cout<<"Inente adivinar el numero"<<endl;
    cin>>numero;
    while(numero!=secreto) {		//cuando el numero que introduzcamos sea distinto del numero secreto se ejecutara este bucle
        if(numero<secreto) {		//si el numero es menor que el numero secreto, se imprimira en pantalla que el numero secreto es mayor
            cout<<"El numero es mayor"<<endl;
        }
        else {		//si el numero es mayor que el numero secreto, se imprimira en pantalla que el numero secreto es menor
            cout<<"El numero es menor"<<endl;
        }
        cin>>numero;		//se introducira un nuevo numero hasta que coincida con el numero aleatorio
    }
    cout<<"Enhorabuena, adivinastes el numero secreto"<<endl;		//si adivinas el numero secreto imprimira esto en pantalla


    system("pause");
}

