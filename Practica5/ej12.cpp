#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int find(int val, int v[], int n) {		//se crea esta funcion para averiguar el numero de veces que aparece un numero en el vector
    int veces=0;
    for(int i=0; i<n; i++) {		//para ver todos los elementos del vector se ejecuta este bucle
        if(v[i]==val) {		//si el valor del numero en el termino i es igual al valor que buscamos entonces se ejecutara esta accion
            veces+=1;		//la variable veces se incrementara en 1
        }
    }
    return veces;		//se devuelve el valor de la variable veces
}

////
int test();
int main() {
    int nerrors=test();
    if (nerrors==0) {
        cout<<"Correcto "<<endl;
    }
    else {
        cout<<"Hay "<<nerrors<<" errores en el test"<<endl;
    }
    system("pause");
}

int test() {
    int errors=0;
    //llama a la funcion para el valor 10
    int v1[10]= {1,2,2,3,1,2,2,3,4,5}; //crea el vector
    if ( find(1,v1,10)!=2) errors++;
    if ( find(10,v1,10)!=0) errors++;
    if ( find(2,v1,10)!=4) errors++;
    if ( find(-1,v1,10)!=0) errors++;

    return errors;
}


