#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std; 

//cree aqui su funcion

float max(float v1[], int n){		//creamos esta funcion para averiguar el valor maximo que tiene el vector v1
	int m=-9999;		//le damos a la variable m, la cual sera la que nos diga el maximo numero del vector, un valor muy pequeño para asegurarnos que el valor maximo este por encima de este valor
	for(int i=0; i<n; i++){		//para comprobar todos los terminos uno a uno se ejecuta este bucle
		if(m<v1[i]){		//siempre que el valor en un termino sea mayor que m se ejecutara esta accion 
			m=v1[i];		//le damos a la variable m el valor del termino i del vector
			}
		}
	return m;		
	}
	
//// 
int test();//indica que la funcion test esta mas abajo
int main(){ 
		int nerrors=test();
		if (nerrors==0){
			cout<<"Correcto "<<endl;
		}
		else{
			cout<<"Hay "<<nerrors<<" errores en el test"<<endl;
		}
		system("pause");

}
//funcion de test
int test(){
	int errors=0;


	//test 1(all positive)
	float vec[6]={1,2,30,4,5,6};
	if(  max(vec,6)!=30 ) errors++;

	//test 2(all negative)
	float vec2[6]={-1,-2,-30,-4,-5,-6};
	if(  max(vec2,6)!=-1 ) errors++;

	//test 3 bigger
	float vec3[11]={-1,-2,-30,-4,-5,-6,1,2,5,6,10};
	if(  max(vec3,11)!=10 ) errors++;

	return errors;
}	


