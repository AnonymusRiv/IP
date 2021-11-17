#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

bool esperfecto(int v) {		//declaramos la funcion de tipo booleana para saber si un numero es perfecto o no
    int suma=0;
    bool res;		//declaro una variable de tipo booleana para saber si es verdadero o no
    for(int i=1; i<v; i++) {		//siempre que la variable auxiliar i valga menos o igual que el numero se ejecutara este bucle
        if(v%i==0) {		//si el resto entre el numero y la variable i es cero se ejecuta esta accion
            suma+=i;
        }
    }
    if(suma==v) {		//si la variable suma vale lo mismo que el numero se ejecutara esta accion
        res=true;		//se le da a la variable res el valor de true
    }
    else {		//si la variable suma es distinto del numero se ejecutara esta accion
        res=false;		//se le da a la variable res el valor de false
    }
    return res;		//devolvemos el valor de la variable res
}
int main() {
    int n;
    cout<<"Introduzca un numero para saber si es perfecto o no"<<endl;
    cin>>n;
    bool sol=esperfecto(n);		//creamos una variable de tipo booleano que valga el valor de la funcion esperfecto para el valor introducido
    if(sol==true) {		//si la variable sol vale true se ejecutara esta accion
        cout<<"El numero "<<n<<" es perfecto"<<endl;
    }
    else {		//si la variable sol no vale true se ejecutara esta accion
        cout<<"El numero "<<n<<" no es perfecto"<<endl;
    }

    system("pause");
}

