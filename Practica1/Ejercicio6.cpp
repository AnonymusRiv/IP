#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	cout << "Introduzca cuatro numeros reales para calcular su media" << endl;
	int numero1,numero2,numero3,numero4,media;  //Se declaran las variables de tipo entero ya que nos pide numeros reales
	cin >> numero1 >> numero2 >> numero3 >> numero4;  //Se introducen los cuatro numeros para hacer la media de estos
	media=(numero1+numero2+numero3+numero4)/4;  //Se hace la suma de las cuatro notas y se divide entre cuatro para averiguar la nota media y se almacena en la variable media
	cout << "La media de esos numeros es " << media << endl;

    system("pause");
}

