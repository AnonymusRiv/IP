#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int numero;		//se declara el numero que se qqquiera introducir
    int i=1;		//se declara una variable auxiliar
    int menor=99999;		//se declara la variable para

    cout<<"Introduzca quince numeros"<<endl;
    while(i<=15) {		//mientras la variable i sea menor o igual que 15 que son los numeros introducidos se ejecutara este bucle
        cin>>numero;
        if(numero<menor) {		//si el numero es menor que la variable menor se ejecutara esta accion
            menor=numero;		//se cambia el numero de la variable menor por el numero, ya que este es menor
        }
        i+=1;		//se le suma 1 a la variable auxiliar para poder introducir los 15 numeros
    }
    cout<<"El numero menor es "<<menor<<endl;

    system("pause");
}

