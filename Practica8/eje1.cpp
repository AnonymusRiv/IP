#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;

int espacios(string cad){		//creamos una funcion de tipo int para saber el numero de espacios que tiene una cadena
	int n=0;		//creamos la variable que contara el numero de espacios que haya
	int s=cad.size();				//creamos la variable s que sera el tamaño de la cadena cad
	for(int i=0; i<s; i++){		//siempre que la variable auxiliar i valga menos que el tamaño de la cadena se ejecutara este bucle
		if(cad[i]==' '){		//si en la posicion i de la cadena hay un espacio se ejecutara esta accion
			n++;		//se incrementara en uno la variable que cuenta el numero de espacios que hay
			}
		}
	return n;		//se devolvera el numero de todos los espacios que haya en la cadena
	}

int main(){
    if( espacios("hola como estas")!=2){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }
    if( espacios("hola como estas ")!=3){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
    if( espacios(" hola como estas ")!=4){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }
    if( espacios("holacomoestas")!=0){
        cout<<"Error 4"<<endl;
        return EXIT_FAILURE;
    }

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}

