#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

//cree aqui su funcion
 void multiplica(float m[4][4], float m2[4][4], float m3[4][4]){		//se creara esta funcion para hacer la multiplicacion matricial de las matrices m y m2 en m3
 	for(int i=0;i<4;i++){		//para multiplicar todos los elementos de las filas se ejecutara este bucle
	 	for(int j=0;j<4;j++){		//para multiplicar todos los elementos de las columnas se ejecutara este bucle
			m3[i][j]=0;		//se le da al elemento de la fila i y columna j el valor de cero
			for(int k=0;k<4;k++){		//para hacer la multiplicacion matricial es necesario una variable auxiliar que nos permitira averiguarla
				m3[i][j]=(m3[i][j]+(m[i][k]*m2[k][i]));		//se utiliza la formula para averiguar la multiplicacion matricial
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
bool iguales(float m[4][4],float m2[4][4]){
		for(int i=0;i<4;i++)
			for(int j=0;j<4;j++)
				if (m[i][j]!=m2[i][j]) return false;
		return true;
}
int test(){
	
	float m[4][4]={ {1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
	float id[4][4]={ {1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
	float res[4][4];
	multiplica(m,id,res);
	assert(iguales(m,res));
	return 0;
}	


