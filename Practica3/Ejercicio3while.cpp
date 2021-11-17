#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int numero;
    int divisores=0, i=1;		//se declara la variable que nos dira los divisores y una variable auxiliar
    cout<<"Introduzca un numero para saber si es primo"<<endl;
    cin>>numero;
    while (i<=numero) {		//siempre que la variable auxiliar valga menos o igual que el numero se ejecutara este bucle
        if(numero%i==0) {		//si el resto del numero y la variable auxiliar es cero, eso quiere decir que i es un divisor del numero y se ejecutara esta accion
            divisores+=1;		//al ser i un divisor del numero se sumara uno a esta variable para saber cuantos divisores tiene
        }
        i++;		//se suma uno a la variable auxiliar para averiguar todos sus divisores
    }
    if(divisores==1 || divisores==2) {		//si tiene dos o un divisor el numero, entonces se ejecutara esta accion que dira que el numero es primo
        cout<<"El numero es primo"<<endl;
			}
        else {		//si tiene mas de dos dividores, el numero no es primo
            cout<<"El numero no es primo"<<endl;
        }
        system("pause");
    }

