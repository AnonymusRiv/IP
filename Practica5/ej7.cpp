#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std; 
 
void suma(float v1[], float v2[], float v3[], int n){		//creamos esta funcion para sumar los terminos de los vectores v1 y v2 y darselo al vector v3
	for(int i=0; i<n; i++){		//para poder sumar todos los terminos ejecutamos este bucle
		v3[i]=v1[i]+v2[i];		//el valor del termino i en v3 sera la suma de los terminos en i de v1 y v2
		}
	}

//// 
int test();
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

int test(){
	int errors=0;


	//test 1(all positive)
	float vec[6]={1,2,30,4,5,6};
	float vec2[6]={1,2,30,4,5,6};
	float vec3[6]; 

	suma(vec,vec2,vec3,6);
	if (vec3[0]!=2 || vec3[1]!=4 || vec3[2]!=60 || vec3[3]!=8 || vec3[4]!=10 || vec3[5]!=12 )  errors++;

	return errors;
}	


