#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

bool espar(int v) {		//declaramos la funcion espar para saber si el numero introducido es par o no
    bool res;					//declaro una variable de tipo booleano q nos dira si es verdadero o falso
    if(v%2==0) {		//si el el resto del numero entre dos es cero se ejecutara esta accion
        res=true;		//le damos a la variable res el valor de true
    }
    else {		//si el resto es dintinto de cero se ejecuta esta accion
        res=false;		//le damos el valor de false a la variable res
    }
    return res;		//se devuelve el valor de res
}


int main() {
    int n;
    cout<<"Introduzca un valor"<<endl;
    cin>>n;
    bool ep=espar(n);		//creamos una variable de tipo booleano, que tenga que llamar a al funcion espar para cuando v valga n que es el numero introducido, cuyo valor sea el valor que devuelve la funcion
    if( ep==true) {		//si la variable vale true se ejecuta esta accion
        cout<<"El valor es par"<<endl;
    }
    else {		//si la variable es distinta de true se ejecuta esta accion
        cout<<"El valor es no es par"<<endl;
    }

    system("pause");
}

