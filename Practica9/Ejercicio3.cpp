#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

bool valido(string cad) {											//se creara la funcion booleana valido para ver si el formato introducido es el pedido
    if((cad[2]=='/') && (cad[5]=='/')) {		//si el termino en 2 y en 5 es ese sera correcto y se ejecutara esta accion
        return true;															//se devolvera el valor de true al ser el formato correcto
    }
    return false;		//si no es el formato pedido se devolvera false
}

bool dia(string cad) {			//se creara la funcion booleana dia para ver si el dia introducido es valido
    char dia[1];							//se creara la cadena de caracteres dia de 2 posiciones
    dia[0]=cad[0];					//la primera posicion correspondra con la primera posicion del numero introducido que sera el primer termino del dia
    dia[1]=cad[1];					//la segunda posicion correspondra con la segunda posicion del numero introducido que sera el segundo termino del dia
    int i=stoi(dia);					//se declara la variable i que sera la cadena de caracteres dia pasada a numero entero
    if(i<=31 && i>0) {		//si el dia es mayor que 0 y menor o igual que 31 esta entre los dias posibles y se ejecutara esta accion
        return true;					//se devolvera el valor de true al ser valido el dia
    }
    return false;		//si no es valido se devolvera false
}

bool mes(string cad) {		//se creara la funcion booleana mes para ver si el mes introducido es valido
    char mes[1];						//se creara la cadena de caracteres mes de 2 posiciones
    mes[0]=cad[3];				//la primera posicion correspondra con la cuarta posicion del numero introducido que sera el primer termino del mes
    mes[1]=cad[4];				//la segunda posicion correspondra con la quinta posicion del numero introducido que sera el segundo termino del mes
    int i=stoi(mes);				//se declara la variable i que sera la cadena de caracteres mes pasada a numero entero
    if(i<=12 && i>0) {		//si el mes es mayor que 0 y menor o igual que 12 esta entre los meses posibles y se ejecutara esta accion
        return true;					//se devolvera el valor de true al ser valido el mes
    }
    return false;		//si no es valido se devolvera false
}

int fecha(string cad) {	//se creara la funcion entera fecha para ver si el año introducido es bisiesto o no
    char fecha[3];				//se creara la cadena de caracteres fecha de 4 posiciones
    fecha[0]=cad[6];			//la primera posicion correspondra con la septima posicion del numero introducido que sera el primer termino del año
    fecha[1]=cad[7];			//la segunda posicion correspondra con la octava posicion del numero introducido que sera el segundo termino del año
    fecha[2]=cad[8];			//la tercera posicion correspondra con la novena posicion del numero introducido que sera el tercer termino del año
    fecha[3]=cad[9];			//la cuarta posicion correspondra con la decima posicion del numero introducido que sera el cuarto termino del año
    return stoi(fecha);	//se devolvera la cadena de caracteres fecha pasada a numero entero
}

int main(int argc, char **argv) {		//se declaran argc y argv
    string cad(argv[1]);		//se declara la cadena cad que sera el segundo termino introducido que correspondra con la fecha introducida
    if(argc!=2) {		//si hay mas o menos de dos elementos, se ejecutara esta accion ya que no se podra comprobar la fecha dada
        cout<<"ERROR, introduzca una fecha valida"<<endl;
        return -1;		//devolvera el valor de -1 ya que el programa da un fallo y asi se indica si hay un error y se paralizara el programa
    }
    else {
        bool i=valido(cad);		//se declara la variable boolena i que sera el retorno de la funcion boolena valido
        if(i==false) {		//si el retorno es falso se ejecutara esta accionya que no es el formato valido
            cout<<"ERROR, el formato tiene que ser dd/mm/aaaa"<<endl;
            return -1;		//devolvera el valor de -1 ya que el programa da un fallo y asi se indica si hay un error y se paralizara el programa
        }
        else {
            bool i=dia(cad);		//se declara la variable boolena i que sera el retorno de la funcion boolena dia
            if(i==false) {		//si el retorno es falso se ejecutara esta accion ya que el dia no esta dentro de sus posibilidades
                cout<<"ERROR, el dia introducido no es correcto"<<endl;
                return -1;			//devolvera el valor de -1 ya que el programa da un fallo y asi se indica si hay un error y se paralizara el programa
            }
            else {
                bool i=mes(cad);		//se declara la variable boolena i que sera el retorno de la funcion boolena mes
                if(i==false) {		//si el retorno es falso se ejecutara esta accion ya que el mes no esta dentro de sus posibilidades
                    cout<<"ERROR, el mes introducido no es correcto"<<endl;
                    return -1;		//devolvera el valor de -1 ya que el programa da un fallo y asi se indica si hay un error y se paralizara el programa
                }
                else {
                    int m=fecha(cad);		//se declara la variable entera m que sera el retorno de la funcion entera fecha que sera el año de nacimiento
                    if(((m%4==0) && (m%100!=0)) || (m%400==0 )) {		//si el año es divisible entre 4 y no entre 100 o si es divisible entre 400 se ejecutara esta accion ya que estas son las posibilidades de que un año sea bisiesto
                        cout<<"El año "<<m<<" es bisiesto"<<endl;
                        return 0;		//devolvera el valor de 0 ya que el programa se ejecuta sin ningun error y se paralizara el programa
                    }
                    else {		//sino el año no sera bisiesto
                        cout<<"El año "<<m<<" no es bisiesto"<<endl;
                        return 0;			//devolvera el valor de 0 ya que el programa se ejecuta sin ningun error y se paralizara el programa
                    }
                }
            }
        }
    }
}
