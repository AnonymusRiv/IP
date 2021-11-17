#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
#include  <cctype> //isdigit
using namespace std;

int digitos(string cad){		//creamos una funcion que devuelve el numero de digitos que tiene la cadena cad
	int n=0;		//creamos la variable que contara el numero de digitos que tiene la cadena
	int s=cad.size();		//creamos la variable s que sera el tamaño de la cadena cad
		for(int i=0; i<s; i++){		//siempre que la variable auxiliar i valga menos que el tamaño de la cadena se ejecutara este bucle
			if(isdigit(cad[i])==true){		//si es digito la posicion i de la cadena se ejecutara este bucle
				n++;		//se incrementara en uno la variable que cueunta el numero de dijitos que hay
				}
			}
		return n;		//se devolvera el numero de todos los dijitos que haya en la cadena
	}

int main(){
    if( digitos("hola como estas")!=0){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }
    if( digitos("123")!=3){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
    if( digitos(" hola 1 como 2 estas ")!=2){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }
    if( digitos("1holacomoestas3")!=2){
        cout<<"Error 4"<<endl;
        return EXIT_FAILURE;
    }

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}
