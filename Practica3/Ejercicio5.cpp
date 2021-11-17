#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int numero, suma=0;		//se declaran las variables que nos van a ayudar a realizar este programa
    int media=0, veces=0;
    cout<<"Introduce numeros hasta que su media sea mayor de 30"<<endl;
    while(media<=30) {		//siempre que la media valga menos o igual que 30 se ejecutara este bucle
        cin>>numero;		//se introducira un numero
        veces+=1;		//se incrementara en uno esta variabe que nos dira las veces que ejecutamos el bucle
        suma+=numero;		//se sumara a la variable suma el valor añadido
        media=suma/veces;		//se hara la media de todos los numeros introducidos hasta el momento y para ello aplicamos la formula de la media que es la suam de todos ellso entre el numero de veces
//cout<<media<<endl;		//como el valor de la media es relativamente alto en caso de duda podemos utilizar esta accion que imprimira por pantalla el numero que lleva la media hasta el momento
    }
    system("pause");
}

