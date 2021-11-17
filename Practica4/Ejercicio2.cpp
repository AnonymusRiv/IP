#include <iostream>
using namespace std;

bool esprimo(int v){		//declaramos la funcion esprimo para saber si el numero introducido es primo o no
	int n=0;
	bool res;		//declaro una variable de tipo booleano que nos dira si es verdadero o falso
	for(int divisores=1; divisores<=v; divisores++){		//siempre que la variable divisores sea menor o igual que el numero v se ejecutara este bucle y se  ira sumando uno a la variable
		if(v%divisores==0){		//si el resto entre el valor v y la variable divisores es cero se ejecutara esta accion
			n+=1;		//se sumara uno a la variable auxiliar para saber cuantos divisores tiene
			}
		}
	if(n==1 || n==2){		//si la variable auxiliar vale 1 o 2 se ejecutara esta accion
		res=true;		//le damos a la variable booleana res el valor de true
		}
	else{		//en caso de que n valga otro numero se ejecutara esta accion, que significara que tiene mas de dos divisores
		res=false;		//le damos a la variable booleana res el valor de false
		}
return res;		//devolvemos el valor de la variable res
}

int main(){
	int n;
	cout<<"Introduzca un numero para saber si es primo o no"<<endl;
	cin>>n;
	bool ep=esprimo(n);		//creamos una variable de tipo booleana cuyo valor sea el valor devuelto de la funcion a la que llama que en este caso es esprimo cuando valga n que es el numero introducido 
	if(ep==true){		//si el valor de la variable ep es true se ejecutara esta accion
	cout<<"El numero " <<n<<" es primo"<<endl;
	}
	else{		//si no vale true se ejecutara esta accion
	cout<<"El numero "<<n<<" no es primo"<<endl;
	}
	cin.ignore();
	cin.get();
}