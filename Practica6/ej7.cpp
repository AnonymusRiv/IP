#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

//cree aqui su funcion
 void min_col(float m[4][4], float min[4]){		//se creara esta funcion para guardar en el vector min el valor minimo de los elementos de una columna 
	for(int j=0;j<4;j++){		//para ver todas las columnas de la matriz se ejecutara este bucle
		min[j]=m[0][j];		//le damos el primer valor de la columna j para ver si hay algun elemento menor que este
		for(int i=0;i<4;i++){		//para ver todas las filas de la matriz se ejecutara este bucle
			if(m[i][j]<min[j]){		//si algun elemento de la columna es menor se ejecutara esta accion
				min[j]=m[i][j];		//se guardara el valor del elemento de la fila i y la columna j en el vactor en posicion j
				}
			}
		}
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
bool iguales(float m[4],float m2[4]){
		for(int i=0;i<4;i++)
				if (m[i]!=m2[i]) return false;
		return true;
}
int test(){
	
	float m[4][4]={ {1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
	float min[4];
	float min_res[4]={1,1,1,1};
	min_col(m,min);
	assert(iguales(min,min_res));
	
	
	float m2[4][4]={ {1,-1,-99999,211},{23,24,12,22},{33,43,-12,3},{124,4613,454,4312}};
	float min_res2[4]={1,-1,-99999,3};
	min_col(m2,min);
 	assert(iguales(min,min_res2));
	return 0;
	
	
}	


