#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

//cree aqui su funcion
int find(float m[4] [4], float val){		//se crea la funcion para buscar un valor en la matriz m
	int veces=0;		//se crea una variable que contara el numero de veces que aparece el numero en la matriz
	for (int i=0; i<4;i++){		//para poder ver todas las filas de la matriz se ejecutara este bucle
		for(int j=0;j<4;j++){		//para poder ver todas las columnas de la matriz se ejecutara este bucle
			if(m[i][j]==val){		//si el valor en la fila i y en la columna j coincide con el valor buscado se ejecutara esta accion
				veces+=1;		//se añadira uno a la variable veces
				}
			}
		}
	return veces;		//se devuelve la variable veces
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
	assert(  find(m,1 )==4);
	assert(  find(m,2 )==4);
	assert(  find(m,-1 )==0);
	return 0;
}	


