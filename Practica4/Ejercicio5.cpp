#include<iostream>
using namespace std;

bool esprimo(int v) {		//declaramos la funcion esprimo de la practica 2 para ejecutarla en este y las explicaciones de esta parte se encuentran en la practica2
    int n=0;
    bool res;
    for(int divisores=1; divisores<=v; divisores++) {
        if(v%divisores==0) {
            n+=1;
        }
    }
    if(n==1 ||n==2) {
        res=true;
    }
    else {
        res=false;
    }
    return res;
}

void primos(int v) {		//declaramos la funcion primos que nos dira todos los n primeros numeros primos
    int i=1; //declaramos una variable auxiliar
    for(int contador=0; contador<v;) {		//siempre que la variable contador valga menor o igual que el numero se ejecutara este bucle
        i+=1;
        bool res=esprimo(i);		//creamos  una variable de tipo booleano que llame a la funcion esprimo y la ejecute para el valor de i
        if(res==true) {		//si el retorno del valor es true se ejecutara esta accion
            cout<<i<<endl;
            contador++;
        }
    }

}
int main() {
    int n;
    cout<<"Introduce un numero para saber los primeros numeros primos"<<endl;
    cin>>n;
    primos(n);		//se llamara y ejecutara la funcion primos
    cout<<"Estos son los " <<n<<" primeros numeros primos"<<endl;
    cin.ignore();
    cin.get();
}