#include<iostream>
using namespace std;


void divisores(int v){		//declaramos la funcion divisores para que imprima los divisores del numero dado 
for(int i=1;i<=v;i++){		//siempre que la variable auxiliar valga menos o igual que el numero se ejecutara este bucle
	if(v%i==0){		//si el resto del numero entre la variable auxiliar es cero se ejecuta esta accion
		cout<<i<<endl;
		}
}
}

int main(){

int n;
cout<<"Introducir un numero para saber sus divisores en orden ascendente"<<endl;
cin>>n;

divisores(n);		//llamamos a la funcion divisores para que nos muestre los divisores del numero introducido
cout<<"Estos son sus divisores en orden ascendente"<<endl;

cin.ignore();
cin.get();
}

