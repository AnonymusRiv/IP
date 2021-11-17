#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
#include  <cctype> //isdigit
using namespace std;

void convierte_a_mayuscula(string& cad){		//creamos la funcion que convertira todas las letras minusculas en mayusculas
	int s=cad.size();		//creamos la variable s que sera el tamaño de la cadena cad
	for(int i=0; i<s; i++){		//siempre que la variable auxiliar i valga menos que el tamaño de la cadena se ejecutara este bucle
		cad[i]=toupper(cad[i]);		//se pondra la letra de la posicion i en mayuscula mediante toupper
		}
	}
 
int main(){
    string cad="hola como estas";
    convierte_a_mayuscula(cad);
    if( cad!="HOLA COMO ESTAS"){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }

    cad="HOLA";
    convierte_a_mayuscula(cad);
    if( cad!="HOLA"){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
 

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}


