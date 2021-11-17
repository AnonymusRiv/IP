#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

bool find_in_sorted_vector(int val, int v[], int n){		//creamos la funcion para comprobar si el valor val se encuentra dentro del vector sabiendo que esta ordenado
	bool encontrado=false;		//le damos el valor de false hasta que encontremos el valor
	int f=n-1, i=0;
	while(encontrado==false && i<=f){		//siempre que no hayamos encontrado el valor y que i sea menor que f se ejecutara este bucle
		int c=(i+f)/2;		//hallaremos el termino medio de ambos
		if(v[c] == val){		//si el valor del vector en el termino c es el valor buscado se ejecutara esta accion
			encontrado=true;		//le damos a buscado el valor de true 
			}
		else if (v[c]<val){		//si el valor del vector en el termino c es menor que el valor busvado se ejecutara esta accion
			i=c+1;		//se cambia la variable i por c+1
			}
		else{		//sino se ejecutara esta accion
			f=c-1;		//se cambia la variable j por c-1
			}
		}
	return encontrado;		//se devuelve el valor de encontrado
	}

//// 
int test();
int main(){ 
	 test();
	 cout<<"Correcto "<<endl;	 
	system("pause");
}

   
int test(){
 	//llama a la funcion para el valor 10 
	cout<<"test 1"<<endl;

 	int v[10]={2,3,4,5,6,7,8,9,10,11};//crea el vector
	assert (find_in_sorted_vector(2,v,10)==true);
	assert (find_in_sorted_vector(223,v,10)==false);
 	cout<<"test 2"<<endl;
	int v2[2]={2,3};//crea el vector
	assert (find_in_sorted_vector(2,v2,10)==true) ;
	assert (find_in_sorted_vector(223,v2,10)==false) ;
 	cout<<"test 3"<<endl;
 	 
	int v3[10]={-3,-2,4,5,6,7,8,9,10,11};//crea el vector
	assert (find_in_sorted_vector(-2,v3,10)==true) ;
 
	assert (find_in_sorted_vector(-3,v3,10)==true) ;
	assert (find_in_sorted_vector(4,v3,10)==true) ;
	assert (find_in_sorted_vector(5,v3,10)==true) ;
	assert (find_in_sorted_vector(6,v3,10)==true) ;
	assert (find_in_sorted_vector(7,v3,10)==true) ;
	assert (find_in_sorted_vector(8,v3,10)==true) ;
	assert (find_in_sorted_vector(9,v3,10)==true) ;
	assert (find_in_sorted_vector(10,v3,10)==true) ;
	assert (find_in_sorted_vector(11,v3,10)==true) ;
 	assert (find_in_sorted_vector(121,v3,10)==false) ;

	cout<<"test 4"<<endl;
	int v4[11]={-3,-2,4,5,6,7,8,9,10,11,12};//crea el vector
	assert (find_in_sorted_vector(-2,v4,11)==true) ;
	assert (find_in_sorted_vector(-3,v4,11)==true) ;
	assert (find_in_sorted_vector(4,v4,11)==true) ;
	assert (find_in_sorted_vector(5,v4,11)==true) ;
	assert (find_in_sorted_vector(6,v4,11)==true) ;
	assert (find_in_sorted_vector(7,v4,11)==true) ;
	assert (find_in_sorted_vector(8,v4,11)==true) ;
	assert (find_in_sorted_vector(9,v4,11)==true) ;
	assert (find_in_sorted_vector(10,v4,11)==true) ;
	assert (find_in_sorted_vector(11,v4,11)==true) ;
	assert (find_in_sorted_vector(12,v4,11)==true) ;
 			
 return 0;
}	


