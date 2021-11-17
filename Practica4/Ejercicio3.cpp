#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int factorial(int v){		//declaramos la funcin factorial para saber el factorial del numero
int n=1;
int res;		//declaro una variable de tipo entero que nos dira el valor del factorial
for(int i=1;i<=v;i++){		//siempre que la variable i valga menor o igual que el numero, se ejecutara este bucle
	n=n*i;		//para calcular el factorial se multiplica el numero por todos los valores hasta llegar a este
}
res=n;		//se almacena en la variable res el valor de n que es el factorial del numero
return res;		//devolvemos el valor de la variable res
}


int main(){
int numero;
cout<<"Introduzca un numero para calcular su factorial"<<endl;
cin>>numero;
int respuesta=factorial(numero);		//creamos una variable de tipo entero que llame a la funcion factorial para el numero introducido y nos dara su valor
cout<<"el factorial de "<<numero<<" es "<<respuesta<<endl;

    system("pause");
}

