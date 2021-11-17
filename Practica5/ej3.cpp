#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

void fijaValorAleatorio(int v[], int n, int max){
int secs=time(0);
	srand(secs);
	for(int i=0; i<n; i++){
		int n=rand()%max;
		v[i]=n;
		}
	}

void imprime(int v[], int n){
	for(int i=0; i<n; i++){
		cout<<"El valor del termino "<<i<<" es "<<v[i]<<endl;
		}
	}

int main(){
	int max, longitud;
	cout<<"Introduzca el valor maximo de los numeros generados aleatoriamente"<<endl;
	cin>>max;
	cout<<"Introduzca el numero de elementos que quiere que tenga el vector"<<endl;
	cin>>longitud;
	int v[longitud];
	fijaValorAleatorio(v, longitud, max);
	imprime(v, longitud);

    system("pause");
}

