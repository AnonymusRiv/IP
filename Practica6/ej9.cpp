#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std; 

//cree aqui su funcion
void stats(float m[4][4], float res[2]){		//se creara esta funcion para guardar el valor de la media y la desviacion tipica de los elementos de la matriz m y los guarda en el vector res
	float suma=0, varianza=0;		//se crea las variables que guardaran los resultados
//primero calculare la media y para ello hay que sumar todos los valores y dividirlos por el numero total que sera 16
	for(int i=0;i<4;i++){		//para sumar todos los elementos de las filas se ejecutara este bucle
		for(int j=0;j<4;j++){		//para sumar todos los elementos de las columnas se ejecutara este bucle
			suma+=m[i][j];		//se sumaran todos los valores que haya en los elementos de fila i y columna j
			}
		}
	res[0]=(suma/16);		//se guardara en la posicion cero del vector res la solucion de la media que es la suma de todos entre el numero total que en este caso es 16
//una vez calculada la media podemos hacer la desviacion tipica de la matriz y para ello era necesario tener antes el valor de la media
	for(int i=0;i<4;i++){		//se escogeran los elementos de las filas i y para ello se ejecutara este bucle
		for(int j=0;j<4;j++){		//se escogeran todos los elementos de las filas j y para ello se ejecutara este bucle
			varianza=(varianza+((m[i][j]-res[0])*(m[i][j]-res[0])));		//la formula de la varianza de forma resumida es esta que seria el sumatorio de todos los valores de los elementos de la matriz al cuadrado menos la media entre el numero de casos totales siendo estos 16 pero para mayor comodidad la division se ejecutara posteriormente
			}
		}
	res[1]=(sqrt((varianza/16)));		//se guardara en la posicion uno la desviacion estandar o tipica que es la raiz de la varianza y en este caso para una mayor comodidad haremos la division en esta accion y posteriormente su raiz cuadrada que esta sera la que se guarde en el vector en posicion uno
	}
//// 
int test();//indica que la funcion test esta mas abajo
int main(){ 
		test();
		cout<<"Correcto"<<endl;
		system("pause");
		return 0;
}
//funcion de test
 
int test(){
	
	float m[4][4]={ {1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
	float st[2];
	stats(m,st);
	assert( fabs( st[0]-2.5)<1e-3  && fabs(st[1]-1.11803)<1e-3);
	return 0;
}	


