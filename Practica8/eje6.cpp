#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;
 
bool palindromo(string cad){		//creamos la funcion que nos dira si la cadena pasada en un palindromo o no
	int s=cad.size();		//creamos la variable s que sera el tamaño de la variable de la cadena cad
		for(int i=0; i<s; i++){		//siempre que la variable i valga menos que el tamaño de la cadena se ejecutara este bucle
			if(cad[i]==' '){		//si el caracter en la posicion i es un espacio se ejecutara esta accion
				cad.erase(i,1);		//se borrara ese espacio para averiguar si es un plindromo o no
				}
			}
s=cad.size();		//el tamaño de la cadena variara debido a que hemos eliminado los espacios
		for(int i=0; i<s; i++){		//siempre que la variable i valga menos que el tamaño de la cadena se ejecutara este bucle
				if(cad[i]!=cad[s-i-1]){		//siempre que la cadena en posicion i valga distinto que en la posicion final s-1, menos la variable i se ejecutara esta accion
					return false;		//se devolvera el valor de falso puesto que no sera un polindromo
					}
			}
		return true;		//se devolvera el valor de true ya que la cadena es un polindromo
	}

int main(){
    if( palindromo("asddsa")==false){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }
    if( palindromo("xasddsa")==true){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
    if( palindromo("acaso hubo buhos aca")==false){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}

