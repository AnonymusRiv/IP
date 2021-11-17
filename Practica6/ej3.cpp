#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

//cree aqui su funcion
 float trace(float m[4][4]){		//se creara la funcion que servira para devolver la traza de la matriz m
	int suma=0;
	for(int i=0;i<4;i++){		//para ver todas las filas de la matriz se efectua este bucle
		for(int j=0;j<4;j++){		//para ver todas las columnas de la matriz se efectua este bucle
			if(i==j){		//si i es igual a j el elemento formara parte de la diagonal principal de la matriz
				suma+=m[i][j];		//se sumara ese valor a la variable suma que sera la suma de todas estas
				}
			}
		}
	return suma;		//se devolvera la suma de los elementos de la diagonal principal
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
	assert( trace(m)== 10 );
	return 0;
}	


