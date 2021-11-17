#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	int numero;
	int menor=99999;

	cout<<"Introduzca quince numeros"<<endl;
	for(int i=1; i<=15; i++){
	cin>>numero;
		if(numero<menor){
			menor=numero;
			}
		}
	cout<<"El numero menor es "<<menor<<endl;

    system("pause");
}

