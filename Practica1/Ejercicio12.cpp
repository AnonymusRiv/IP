#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << "Introduzca un dia [1,7]" << endl;
	int numero;  //Se declara una variable de tipo entero que se introducira su valor a continuacion
	cin >> numero;

		switch (numero){  //Este operador va condicionado por el valor que tenga la variable entre parentesis, que en este caso sera el numero que hemos introducido con anterioridad y, dependiendo de este, ejecutara una accion u otra
			case 1 : {  //En caso de que la variable valga 1, se mostrara en pantalla que el dia es el lunes
				cout<<"Es lunes"<<endl;
				}break;  //Se utiliza para parar la sentencia switch y continuar con el programa
			case 2 : {  //En caso de que la variable valga 2, se mostrara en pantalla que el dia es el martes y asi sucesivamente hasta el domingo
				cout<<"Es martes"<<endl;
				}break;
			case 3 : {
				cout<<"Es miercoles"<<endl;
				}break;
			case 4 : {
				cout<<"Es jueves"<<endl;
				}break;
			case 5 : {
				cout<<"Es viernes"<<endl;
				}break;
			case 6 : {
				cout<<"Es sabado"<<endl;
				}break;
			case 7 : {
				cout<<"Es domingo"<<endl;
				}break;
			default :{  //en caso de que la variable no valga ninguno de los valores anteriores se ejecutara esta accion
				cout<<"El dia no es valido"<<endl;
				}
		}

    system("pause");
}

