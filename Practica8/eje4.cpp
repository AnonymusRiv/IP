#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;

int vocales(string cad){		//creamos la funcion que devuelve el numero de vocales que tiene la cadena cad
	int n=0;		//creamos la variable que contara el numero de vocales que tiene la cadena
	int s=cad.size();		//creamos la variable s que sera el tamaño de la cadena cad
	for(int i=0; i<s; i++){		//siempre que la variable auxiliar i valga menos que el tamaño de la cadena se ejecutara este bucle
		char c = tolower(cad[i]);		//implementamos una variable que convertira en minusculas las letras en posicion i de la cadena
		if(c =='a' ||c =='e' ||c =='i' ||c =='o' ||c =='u'){		//si c es igual a alguna vocal se ejecutara esta accion
			n++;		//se implementara en uno el numero de vocales que hay
			}
		}
		return n;		//se devolvera el numero de todas las vocales que haya en la cadena
	} 
 
int main(){
    if( vocales("HOLA COMO ESTAS")!=6){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }

    if( vocales("hola como Estas")!=6){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }

    if( vocales("xbnmsmnbx  nssmn")!=0){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}
