#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

//cree aqui su funcion
 void max_row(float m[4][4], float max[4]){		//se creara esta funcion para guardar en el vector max el valor maximo de los elementos de una fila 
	for(int i=0;i<4;i++){		//para ver todas las filas de la matriz se ejecutara este bucle
		max[i]=m[i][0];		//le damos el primer valor de la fila i para ver si hay algun elemento mayor que este
		for(int j=0;j<4;j++){		//para ver todas las columnas de la matriz se ejecutara este bucle
			if(m[i][j]>max[i]){		//si algun elemento de la fila es mayor se ejecutara esta accion
				max[i]=m[i][j];		//se guardara el valor del elemento en la fila i y columna j en el vector max en posicion i
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
	float max[4];
	float max_res[4]={1,2,3,4};
	max_row(m,max);
	assert(iguales(max,max_res));

	float m2[4][4]={ {-1,5,1,1},{5,1,4,8},{2,3,-1,-1},{-2,-1,-9,-9}};
	float max_res2[4]={5,8,3,-1};
	max_row(m2,max);
	assert(iguales(max,max_res2));
	return 0;
}	


