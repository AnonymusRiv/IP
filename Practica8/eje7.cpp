#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;

bool compruebadni(string dni) {		//creamos la funcion para comprobar un dni
    for(int i=0; i<8; i++) {		//siempre que la variable i sea menor que 8 se ejecutara este bucle
        if(isdigit(dni[i])==false) {		//si la posicion i de la cadena no es un digito sera falso ya que un dni tiene 8 digitos mas la letra
            return false;		//se devolvera el valor de falsoçe
        }
    }
    dni[8]=toupper(dni[8]);		//se modificara la posion 8 que sera la letra y se pondra en mayuscula
    int numero=stoi(dni);		//creamos una variable que sera el numero en entero del dni
    char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";		//creamos el caracter para saber si la letra estat dentro de estas
    if(dni[8]!=letras[(numero%23)]) {		//si la posicion 8 del dni que es la letra no esta dentro del vector letras que es las letras introducidas anteriormente se ejecutara esta accion
        return false;		//se devolvera el valor de false
    }
    return true;		//se devolvera el valor de true
}


int main() {
    if( compruebadni("12345678")!=false) {
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("12345678Z")!=true) {
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("12345678z")!=true) {
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("12345678X")!=false) {
        cout<<"Error 4"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("87654321X")!=true) {
        cout<<"Error 5"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("87654321a")!=false) {
        cout<<"Error 6"<<endl;
        return EXIT_FAILURE;
    }


    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}


