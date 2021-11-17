#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	cout << "Introduzca un numero entero" << endl;
	int Respuesta;  //Se declara una variable entera para el numero introducido ya que este tiene que ser entero
	cin >> Respuesta;
	if ((Respuesta >= 1) && (Respuesta <= 7) ){  //siempre que el numero introducido sea mayor o igual que 1 y menor o igual que 7 se ejecuta esta accion
		if (Respuesta == 1){  //Si el numero es un 1 se ejecuta esta accion que marcara en pantalla que es lunes
		cout << "Es Lunes" << endl;
		}
		if (Respuesta == 2){  //Si el numero es un 2 se ejecuta esta accion que marcara en pantalla que es martes y asi sucesivamente hasta el domingo
		cout << "Es Martes" << endl;
		}		
		if (Respuesta == 3){
		cout << "Es Miercoles" << endl;
		}	
		if (Respuesta == 4){
		cout << "Es Jueves" << endl;
		}	
		if (Respuesta == 5){
		cout << "Es Viernes" << endl;
		}	
		if (Respuesta == 6){
		cout << "Es Sabado" << endl;
		}	
		if (Respuesta == 7){
		cout << "Es Domingo" << endl;
		}
	}
	else {  //Si el numero no esta entre el 1 y el 7 y tampoco es uno de estos, se ejecuta esta accion que mostrara en pantalla un aviso de error
	cout << "El numero introducido no es valido, pruebe de nuevo con un numero entre 1 y 7" << endl;
	}
	

    system("pause");
}

