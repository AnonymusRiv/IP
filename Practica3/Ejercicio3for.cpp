#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int numero;
    int divisores=0;
    cout<<"Introduzca un numero para saber si es primo o no"<<endl;
    cin>>numero;
    for(int i=1; i<=numero; i++) {
        if(numero%i==0) {
            divisores+=1;
        }
    }
    if(divisores==1 || divisores==2) {
        cout<<"El numero es primo"<<endl;
    }
    else {
        cout<<"El numero no es primo"<<endl;
    }
    system("pause");
}

