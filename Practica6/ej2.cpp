#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

//cree aqui su funcion
void sum(float m[4][4], float m2 [4][4]){		//se creara la funcion que servira para efectuar la suma de las dos matrices en la primera
	for (int i=0;i<4;i++){		//para ver todas las filas de la matriz se efectua este bucle
		for(int j=0;j<4;j++){		//para ver todas las columnas de la matriz se efectua este bucle
			m[i][j]=m[i][j]+m2[i][j];		//los valores de la suma de las dos matrices en la fila i y en la columna j se almacenan en la misma fila y columna en la matriz m
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
int test(){
	
	float m[4][4]={ {1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	float m2[4][4]={ {1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};	
	sum(m,m2);	
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			assert( m[i][j]==2*m2[i][j]);
	return 0;
}	


