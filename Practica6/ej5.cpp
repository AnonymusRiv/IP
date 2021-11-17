#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

//cree aqui su funcion
 void transpose(float m[4][4]){		//creamos la funcion que servira para transponer la matriz m como argumento
	float aux;		//creamos una variable auxiliar que nos servira para guardar los valores
	int c=0;		//creamos otra variable auxiliar que nos permitira cambiar la
	for(int i=0;i<4;i++){		//para ver todas las filas de la matriz se ejecutara este bucle
		for(int j=c;j<4;j++){		//para ver todas las columnas de la matriz se ejecutar este bucle
			aux=m[i][j];		//se guardara el valor de la matriz de fila i y columna j en la variable aux
			m[i][j]=m[j][i];		//se guarda el valor de fila j y columna i en la fila i y la columna j
			m[j][i]=aux;		//se guarda el valor de la variable auxiliar en la fila j y columna i de la matriz
			}
	c++;		//se suma uno a esta variable para pasar a la colmna siguiente
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
bool iguales(float m[4][4],float m2[4][4]){
		for(int i=0;i<4;i++)
			for(int j=0;j<4;j++)
				if (m[i][j]!=m2[i][j]) return false;
		return true;
}
int test(){
	
	float m[4][4]={ {1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	float m2[4][4]={ {1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
	transpose(m) ;
	assert(iguales(m,m2));
	
	return 0;
}	


