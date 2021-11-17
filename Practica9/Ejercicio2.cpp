#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char **argv) {		//se declaran argc y argv
    float suma=0;		//se declara la variable float suma que sera la suma de todos los numeros introducidos
    int contador=0;		//se declara la variable entera contador para llevar la cuenta de los numeros que se suman
    float media=0;		//se declara la variable float media que sera la media de los numeros introducidos entre la variable contador
    for(int i=1; i<argc; i++) {		//siempre que i sea menor que el numero de elementos que hayamos introducidos se ejecutara este bucle
        suma+=(stof(argv[i]));		//se sumaran los numeros introducidos pasados de string a float
        contador++;		//se incrementara en uno la variable contador para saber el numero de terminos sumados
    }
    media=suma/contador;		//se hara la media que sera la suma de los numeros introducidos entre las veces
    cout<<"La media de los "<<contador<<" terminos es "<<media<<endl;
	return 0;		//devolvera el valor de 0 ya que el programa se ejecuta sin ningun error y se paralizara el programa
}

