#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv) {		//se declaran argc y argv
    int numero=stoi(argv[1]);		//se declarara la variable numero que sera el primer numero introducido pasado de string a tipo entero
    if(argc !=2) {		//si hay mas o menos de dos caracteres introducidos no se podra hacer la raiz cuadrada y se ejecutara esta accion
        cout<<"ERROR, introduce un numero para calcular su raiz cuadrada"<<endl;
        return -1;		//devolvera el valor de -1 ya que el programa da un fallo y asi se indica si hay un error y se paralizara el programa
    }
    else if(numero<0) {		//si el numero introducido es negativo no se podra hacer su raiz y se ejecutara esta accion
        cout<<"ERROR, el numero es negativo"<<endl;
        return -1;		//devolvera el valor de -1 ya que el programa da un fallo y asi se indica si hay un error y se paralizara el programa
    }
    else {
        float res=sqrt(numero);		//se declarara la variable con la respuesta que sera la raiz del numero introducido
        cout<<"El resultado de la raiz del numero "<<numero<<" es "<<res<<endl;
        return 0;		//devolvera el valor de 0 ya que el programa se ejecuta sin ningun error y se paralizara el programa
    }
}

