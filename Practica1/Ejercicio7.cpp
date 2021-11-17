#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	float practica,parcial,examen,nota;  //Se declaran las variables con float ya que las notas pueden tener decimales
	cout << "Introduzca las notas del alumno" << endl;
	cout << "Introduzca la nota de practica" << endl;
	cin >> practica;  //Se introduce la nota de la practica
	cout << "Introduzca la nota del parcial" << endl;
	cin >> parcial;  //Se introduce la nota del parcial
	cout << "Introduzca ls nota del examen final" << endl;
	cin>> examen;  //Se introduce la nota del examen final
	nota=(practica*0.25)+(parcial*0.25)+(examen*0.5);  //Para averiguar la media se multiplica lo que haya sacado el alumno por el porcentaje que valga cada apartado y se divide entre 100, se suma y se almacena en la variable nota que es la que se mostrara en pantalla
	cout << "La nota del alumno es " << nota << endl;	

    system("pause");
}

