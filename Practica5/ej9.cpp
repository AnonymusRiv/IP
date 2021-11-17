#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int divisores(int val, int div[], int n) {		//creamos esta funcion para calcular los divisores del valor val y guardarlos en el vector div
    int numero=0;
    int i=0;
    for(int m=1; m<=val; m++) {		//para calcular los divisores del numero utilizamos este bucle
        if(i<n) {		//siempre que el termino sea menor que el tamaño del vector se ejecutara esta accion
            if(val%m==0) {		//si el resto entre el valor y m es cero entonces m es un divisor de val
                numero+=1;		//se añade uno a una variable para saber el numero de divisores que tiene
                div[i]=m;		//se guarda en el termino i del vector div el valor de m que es divisor de val
                i+=1;
            }
        }
    }
    return numero;		//se devuelve el numero de divisores que tiene el valor
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
    int vsize=5;
    int div[vsize];//crea el vector
    //llama a la funcion para el valor 10
    int nd= divisores(10,div,vsize);
    //comprueba validez del resultado
    if (nd!=4 || div[0]!=1 || div[1]!=2 || div[2]!=5 || div[3]!=10) errors++;

    //ahora el 1
    nd= divisores(1,div,vsize);
    if (nd!=1 || div[0]!=1)  errors=0;

    //ahora el 1
    nd= divisores(2,div,vsize);
    if (nd!=2 || div[0]!=1   || div[1]!=2   ) errors++;

    //ahora el 32824, tiene 16 divisores, pero no deberian calcularse mas de 5
    nd= divisores(32824,div,vsize);
    if (nd!=vsize || div[0]!=1   || div[1]!=2 || div[2]!=4 || div[3]!=8 || div[4]!=11    ) errors++;


    return errors;
}


