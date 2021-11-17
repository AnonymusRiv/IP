#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	int numero;
	int divisor=1;
	cout<<"Introduce un numero para saber sus divisores en orden descendente"<<endl;
	cin>>numero;
	divisor=numero;		//se iguala para saber sus divisores en orden descendente ya que el primero ira disminuyendo hasta llegar al 1
	while(divisor>=1){		//si la variable divisor es mayor que 1 se ejecuta este bucle
		if(numero%divisor==0){		//si el resto entre en numero y el dividor es 0 significa que este, es un divisor del numero y se imprimira en pantalla
			cout<<divisor<<endl;
			}
		divisor=divisor-1;		//esta variable disminuira cada vez hasat llegar a 1 que es el ultimo dividor posible y comun de todos los numeros
		}
	cout<<"Esos son sus divisores en orden descendente"<<endl;

    system("pause");
}

