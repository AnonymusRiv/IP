#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;

int find(string a, string b){		//creamos la funcion que buscara la cadena b en la cadena a y devolvera la posicion de inicio de esta 
	int x=0;		//creamos una variable que sera la posicion de inicio de la cadena b
	int aux;		//creamos una variable auxiliar que sera el punto de inicio de la cadena b en a
	int s=a.size();		//creamos la variable s que sera el valor del tamaño de la cadena a
	int m=b.size();		//creamos la variable m que sera el valor del tamaño de la cadena b
	for(int i=0; i<s; i++){		//siempre que la variable i valga menos que el tamaño de la cadena a se ejecutara este bucle
		if(a[i] == b[x]){		//si la posicion en i de la cadena a corresponde con la posicion x de la cadena b se ejecutara esta accion
			if(x==0){		//si x vale cero que sera el punto de inicio de la segunda cadena se ejecutara esta accion
				aux=i;		//la variable aux tomara el valor de i que sera la posicion inicial de la cadena b en a
				}
			x++;		//se implementa x en uno para ver si esta toda la cadena de b en a
		if(x==m){		//si se cumple que la posicion x de la variable b es igual que su tamaño se ejecutara esta accion
			return aux;		//se devolvera el valor del punto de inicio de la cadena b en a
			}
		}
}
return -1;		//se devolvera el valor de -1
}
 
int main(){
    if( find("12345678","123")!=0){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }
    if( find("12345678","hola")!=-1){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
    if( find("Juan Perez","Perez")!=5){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }
    if( find("Juan Perez Perez","Perez")!=5){
        cout<<"Error 5"<<endl;
        return EXIT_FAILURE;
    }

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}


