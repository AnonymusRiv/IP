#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;

 string replace(string cad,char a, char b){		//creamos la funcion para cambiar el caracter a por el caracter b de la cadena cad
	int s=cad.size();		//creamos la variable s que sera el tamaño de la cadena cad
	for(int i=0; i<s; i++){		//siempre que la variable auxilliar i valga menos que el tamaño de la cadena se ejecutara este bucle
		if(cad[i]==a){		//si el caracter de la posicion i de la cadena coincide con el caracter a se ejecutara esta accion
			cad[i]=b;		//se cambiara el caracter de la posicion i por el caracter b
			}
		}
	return cad;		//se devolvera la cadena con el caracter cambiado
	}

int main(){
    if( replace("HOLA COMO ESTAS",'A','a')!="HOLa COMO ESTaS"){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }

    if( replace("HOLA COMO ESTAS",'x','x')!="HOLA COMO ESTAS"){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
    if( replace("HOLA COMO EsTAS",'s','S')!="HOLA COMO ESTAS"){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }
    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}

