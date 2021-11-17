#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv) {		//se declararan argc y argv
    float numero=stof(argv[1]);			//se declara la variable float numero que sera el primero numero introducido pasada a float
    for (int i=2; i<argc; i++) {			//siempre que i valga menos que el numero de caracteres introducidos se ejecutara esta accion
        string cad = argv[i];						//se declara la cadena cad que sera el termino en posicion i
        if(cad == "-sum") {						//si la cadena corresponde con -sum se ejecutara esta accion
            float suma= stof(argv[i+1]);		//se declarara la variable flotante suma que sera el siguiente numero introducido pasado a float
            numero +=suma;						//se sumara el numero de detras de la cadena -sum al numero
            i++;		//se incrementara i en uno para buscar el siguiente comando
        }
        else if(cad == "-mult") {			//si la cadena corresponde con -mult se ejecutara esta accion
            float mult= stof(argv[i+1]);		//se declarara la variable flotante mult que sera el siguiente numero introducido pasado a float
            numero *=mult;						//se multiplicara el numero de detras de la cadena -mult al numero
            i++;		//se incrementara i en uno para buscar el siguiente comando
        }
        else if(cad == "-div") {				//si la cadena corresponde con -div se ejecutara esta accion
            float div= stof(argv[i+1]);		//se declarara la variable flotante div que sera el siguiente numero introducido pasado a float
            if(div==0) {		//si el numero es 0 se ejecutara esta accion
                cout<<"ERROR, no se puede dividir entre cero"<<endl;
                return -1;		//devolvera el valor de -1 ya que el programa da un falloo y asi se indica si hay un error y se paralizara el programa
            }
            else {
                numero /=div;			//se dividira el numero de detras de la cadena -div al numero
                i++;		//se incrementara i en uno para buscar el siguiente comando
            }
        }
        else if(cad == "-sqrt") {			//si la cadena corresponde con -sqrt se ejecutara esta accion
            if(numero<0) {		//si el numero es negativo se ejecutara esta accion
                cout<<"ERROR, no se puede hacer la dividion de un numero negativo"<<endl;
                return -1;		//devolvera el valor de -1 ya que el programa da un falloo y asi se indica si hay un error y se paralizara el programa
            }
            else {
                numero=sqrt(numero);	//se hara la raiz cuadrada del numero que tenemos hasta ahora ya que este comando se utilizara al final
            }
        }
    }
    cout<<"El resultado es "<<numero<<endl;
    return 0;		//devolvera el valor de 0 ya que el programa se ejecuta sin ningun error y se paralizara el programa
}

