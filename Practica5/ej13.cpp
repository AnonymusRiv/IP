#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std; 
 
int find_indices(int val, int v[], int n, int indices[]){		//creamos la funcion para ver en que posiciones aparece el valor val y lo guardamos en el vector indices
int veces=0;
int m=0;
	for(int i=0; i<n; i++){		//para ver todos los elementos del vector utilizamos este bucle
		if(v[i]==val){		//si el numero del vector en el termino i es igual al valor buscado se ejecuta esta accion
			veces+=1;		//se incrementa en uno la variable veces que sera las veces que aparece
			if(m<n){		//si que el termino sea menor que el tamaño del vector indices se ejeciata esta accion
				indices[m]=i;		//la variable indices en el termino m vale la posicion de i
				}
			m+=1;		//se incrementa en 1 para no escribir en el mismo termino del vector
			}
		}
return veces;		//retorna el numero de veces que aparece el valor en el vector
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
	//llama a la funcion para el valor 10 
	int v1[10]={1,2,2,3,1,2,2,3,4,5};//crea el vector
	int indices[10];
	//reset indices
	for(int i=0;i<10;i++) indices[i]=-1;//-1 means invalid 

	int value,nt;

	////// test para 1
	value=1;	
	nt=find_indices(value,v1,10,indices);
	if (nt>10) {cout<<"too many indices found"<<endl; errors++; return errors;}//do not continue cause we could go out of bounds
	for(int i=0;i<nt;i++){
		if ( indices[i] <0 || indices[i]>=10) {//invalid index
			cout<<"invalid index "<<indices[i]<<endl;
			errors++;
		}
		else{ //correct index, check if the value expected is in
			if (v1[ indices[i] ]!=value){
				cerr<<"value in indices["<<i<<"] is not "<<value<<endl;
				errors++;
			}
		}
	}
		
		////// test para 2
	value=2;	
	nt=find_indices(value,v1,10,indices);
	if (nt>10) {cout<<"too many indices found"<<endl; errors++; return errors;}//do not continue cause we could go out of bounds
	for(int i=0;i<nt;i++){
		if ( indices[i] <0 || indices[i]>=10) {//invalid index
			cout<<"invalid index "<<indices[i]<<endl;
			errors++;
		}
		else{ //correct index, check if the value expected is in
			if (v1[ indices[i] ]!=value){
				cerr<<"value in indices["<<i<<"] is not "<<value<<endl;
				errors++;
			}
		}
	}
		
		////// test para valor que no esta
	value=2222;	
	nt=find_indices(value,v1,10,indices);
	if (nt>10) {cout<<"too many indices found"<<endl; errors++; return errors;}//do not continue cause we could go out of bounds
	for(int i=0;i<nt;i++){
		if ( indices[i] <0 || indices[i]>=10) {//invalid index
			cout<<"invalid index "<<indices[i]<<endl;
			errors++;
		}
		else{ //correct index, check if the value expected is in
			if (v1[ indices[i] ]!=value){
				cerr<<"value in indices["<<i<<"] is not "<<value<<endl;
				errors++;
			}
		}
	}
				
		
 return errors;
}	


