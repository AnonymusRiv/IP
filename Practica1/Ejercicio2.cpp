#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	float angulo,radianes;  //Se declaran las variables con float para introducir angulos con mejor precision y para poder dar el resultado en pi radianes correctamente
	cout << "Introduzca un angulo expresado en angulos" << endl;
	cin >> angulo;
	radianes=angulo/180;  //Se divide el angulo introducido entre 180 dado que un pi radian son 180 grados
	cout << "Este angulo expresado en radianes es " << radianes << " pi radianes" << endl;
    system("pause");
}

