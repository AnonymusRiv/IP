#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

struct alumno {		//creamos la estructura alumno que recopilara varias variables
    string nombre = "";		//ponemos las cadenas en vacio
    string apellido1 = "";
    string apellido2 = "";
    string dni = "";
    int edad = 0;
    float nota = 0;
};

bool dnivalido(string &cad) {		//esta funcion es para comprobar si el dni introducido es valido o no
    int n=0;
    int tam = cad.size();		//se crea la variable tam que sera el tamaño de la cadena
    for(int i=0; i<9; i++) {		//se creara un bucle para comprobar los numeros que hay
        if(isdigit(cad[i])==true) {		//si la posicion i de la cadena es un digito se hara esta accion
            n++;		//se incrementara en uno la variable que cuenta los numeros que hay
        }
    }
    if(tam!=9 || n!=8) {		//si el tamaño es distinto de nueve o si tiene mas o menos digitos de los que deberia se ejecutara esta accion
        return false;		//se devolvera falso ya que no es valido el dni
    }
    else {
        return true;		//si el dni es correcto se devolvera el valor de true
    }
}

alumno crearalumno() {		//esta funcion servira para crear un nuevo alumno o para modificar un alumno ya existente
    alumno al;		//se crea una variable con estructura alumno que sera para introducir sus datos
    string dni = "";		//ponemos la cadena del dni a cero
    cout<<"Introduzca el dni del alumno"<<endl;		//pedimos el dni al usuario
    cin>>dni;
    if(dnivalido(dni)) {		//se verifica si el dni es valido o no si es valido se ejecutara esta accion
        al.dni=dni;		//le da el dni introducido al alumno creado
        cout<<"Introduzca el nombre del alumno"<<endl;		//le pedimos los datos del alumno al usuario
        cin>>al.nombre;
        cout<<"Introduzca el primer apellido del alumno"<<endl;
        cin>>al.apellido1;
        cout<<"Introduzca el segundo apellido del alumno"<<endl;
        cin>>al.apellido2;
        cout<<"Introduzca la edad del alumno"<<endl;
        cin>>al.edad;
        cout<<"Introduzca la nota del alumno"<<endl;
        cin>>al.nota;

    }
    else {		//si no es valido se ejecutara esta accion
        cout<<"El dni introducido no es correcto"<<endl;
    }
    return al;		//se devolvera la estructura de alumno
}

bool addalumno(alumno alumnos[], int n, alumno a) {		//esta funcin servira para ver si hay sitio para el alumno y si lo hay lo añade y sino no
    for(int i=0; i<n; i++) {		//se creara este bucle para ver cual es la siguiente posicion en la que se pueda añadir el alumno
        if(alumnos[i].dni== "") {		//si el dni esta en blanco significa que no hay alumno y se ejecutara esta accion
            alumnos[i]=a;		//se le dara los datos de alumno creado anterirmente
            return true;		//se retornara true al poder añadir el alumno a la lista
        }
    }
    return false;		//sino de retornara false ya que no se podra añadirlo
}

void eliminar(alumno alumnos[], int i) {		//esta funcion sirve para eliminar el alumno seleccionado
    alumnos[i].dni= "";		//se pondra el dni en blanco para poder crear el siguiente alumno en esa posicion
}

int busqueda(alumno alumnos[], int n, string dni) {		//esta funcion servira para buscar un alumno entre los ya registrados mediante el dni introducido
    for(int i=0; i<n; i++) {		//este bucle sirve para buscar el dni entre los que hay
        if(alumnos[i].dni==dni) {		//si el dni coincide con el que buscamos se ejecutara esta accion
            return i;		//se devolvera la posicion en la que esta el dni que buscamos
        }
    }
    return -1;		//si no se encuentra se retornara el valor de -1
}

void imprimiralumno(alumno &a) {		//esta funcion servira para imprimir por pantalla los datos del alumno con el dni introducido con anterioridad
    cout<<"El nombre del alumno es "<<endl;
    cout<<a.nombre<<endl;
    cout<<"El primer apellido del alumno es "<<endl;
    cout<<a.apellido1<<endl;
    cout<<"El segundo apellido del alumno es "<<endl;
    cout<<a.apellido2<<endl;
    cout<<"El dni del alumno es "<<endl;
    cout<<a.dni<<endl;
    cout<<"La edad del alumno es "<<endl;
    cout<<a.edad<<endl;
    cout<<"La nota del alumno es "<<endl;
    cout<<a.nota<<endl;
}

void imprimirtodos(alumno alumnos[], int n) {		//esta funcion servira para imprimir por pantalla los datos de todos los alumnos introducidos hasta el momento
    for(int i=0; i<n; i++) {		//se crea este bucle para imprimir a todos los alumnos
        if(alumnos[i].dni != "") {		//si el dni del alumno no esta en blanco se ejecutara esta accion
            cout<<"Alumno "<<i<<endl;
            imprimiralumno(alumnos[i]);		//se llamara a la funcion imprimir que los ira imprimiendo uno a uno
            cout<<endl;
        }
    }
}

int leer(string ruta, alumno alumnos[]) {		//esta funcion es para leer el fichero con la ruta introducida
    ifstream file;
    file.open(ruta);		//se abrira la ruta introducida
    if(!file.is_open()) {		//si el archivo no se abre se ejecutara esta accion
        return -1;		//se devolvera el valor de -1 al no poder abrirse
    }
    int i=0;
    while(!file.eof()) {		//siempre que no sea el final del archivo se ejecutara esta accion
        alumno al;		//se crea un alumno con la esctructura alumno
        file>>al.nombre;		//se recuperaran los datos de los alumnos que haya en el fichero
        file>>al.apellido1;
        file>>al.apellido2;
        file>>al.dni;
        file>>al.edad;
        file>>al.nota;
        alumnos[i]=al;		//se guardara en la estructura alumno los distintos alumnos que haya
        i++;
    }
    file.close();		//se cerrara el fichero
    return i;		//se devolvera el numero de alumnos que haya
}

bool guarda(string ruta, alumno alumnos[], int tam) {		//esta funcion guardara en el fichero seleccionado los alumnos añadidos hasta el momento
    ofstream file;
    file.open(ruta);		//se abrira la ruta introducida
    if(!file.is_open()) {		//si el archivo no se abre se ejecutara esta accion
        return false;		//se devolvera el valor de false al no poder abrirse
    }
    for(int i=0; i<tam; i++) {		//se creara este bucle para guardar los alumnos que haya hasta el momento
        if(alumnos[i].dni != "") {		//si el dni esta en blanco se ejecutara esta accion
            file << alumnos[i].nombre<<endl;		//se guardaran los datos de los alumnos al fichero
            file << alumnos[i].apellido1<<endl;
            file << alumnos[i].apellido2<<endl;
            file << alumnos[i].dni<<endl;
            file << alumnos[i].edad<<endl;
            file << alumnos[i].nota<<endl;
        }
    }
    file.close();		//se cerrara el fichero
    return true;		//se devolvera true
}

void menu() {		//esta funcion servira para mostrar en pantalla el menu inicial y las posibilidades que podemos hacer introduciendo un numero por tecado
    cout<<"Seleccione una opcion"<<endl;
    cout<<"1.  Insertar alumno"<<endl;
    cout<<"2.  Imprimir datos alumno"<<endl;
    cout<<"3.  Imprimir datos todos alumnos"<<endl;
    cout<<"4.  Modificar alumno"<<endl;
    cout<<"5.  Eliminar un alumno"<<endl;
    cout<<"6.  Salir"<<endl;
    cout<<endl;
}


int main(int argc, char **argv) {		//se declaran los valores de argc y argv
    if(argc !=2) {		//si hay mas o menos elementos de dos se ejecutara esta accion
        cout<<"No se ha especificado la ruta"<<endl;
        return -1;		//se devolvera -1 al no especificar la ruta
    }
    alumno alumnos[100];		//se creara un vector de estructura alumno con 100 alumnos
    int opcion_menu=0;
    string ruta = argv[1];		//la ruta del fichero sera una cadena que sera el 2 elemento introducido por el terminal de comando
    if(leer(ruta, alumnos)==-1) {		//se llamara a la funcion lee y si devuelve -1 se ejecutara esta accion
        cout<<"No se ha encontrado el fichero"<<endl;
    }
    do {		//se hara esto hasta que se marque la opcion 6
        menu();		//se llamara a la funcion menu
        cin>>opcion_menu;		//se introducira la opcion que se quiera hacer
        switch(opcion_menu) {		//se creara un bucle switch con la opcion introducida para ejecutar la opcion que queramos
        case 1: {		//en caso de que el numero introducido sea 1 se ejecutara esta accion
            alumno al = crearalumno();		//se creara un alumno de dicha estructura que llamara a la funcion crearalumno
            if(al.dni == "") {		//si el dni esta en blanco significara que no se ha podido crear el alumno
                cout<<"no se ha podido añadir el alumno"<<endl;
            }
            else {		//si se ha podido crear al alumno se ejecutara esta accion
                if(!addalumno(alumnos, 100, al)) {		//si no hay mas espacio se ejecutara esta accion
                    cout<<"No se ha podido añadir el alumno no hay espacio"<<endl;
                }
                else {		//si se ha podido añadir se ejecutara esta accion
                    cout<<"Alumno añadido"<<endl;
                }
            }
            guarda(ruta, alumnos, 100);		//guardara el alumno creado
        }
        break;
        case 2: {		//en caso de que el numero introducido sea 2 se ejecutara esta accion
            string dni;		//se creara una cadena con el dni para que el usuario pueda introducir el dni para buscarlo
            cout<<"Introduzca el dni para imprimir sus datos"<<endl;
            cin>>dni;
            int i=busqueda(alumnos, 100, dni);		//se creara una variable que llamara a la funcion busqueda para que busque el alumno con el dni introducido
            if(i!=-1) {		//si es distinto de -1 se ejecutara esta accion
                imprimiralumno(alumnos[i]);		//se imprimira al alumno en posicion i
            }
            else {		//si no se encuentra el dni se ejecutara esta accion
                cout<<"El dni no se escuentra entre los dni registrados"<<endl;
            }
        }
        break;
        case 3: {		//en caso de que el numero introducido sea 3 se ejecutara esta accion
            imprimirtodos(alumnos, 100);		//se imprimiran todos los alumnos que haya hasta ese momento
        }
        break;
        case 4: {		//en caso de que el numero introducido sea 4 se ejecutara esta accion
            string dni;			//se creara una cadena con el dni para que el usuario pueda introducir el dni para buscarlo
            cout<<"Introduzca el dni del alumno para modificar sus datos"<<endl;
            cin>>dni;
            int i=busqueda(alumnos, 100, dni);		//se creara una variable que llamara a la funcion busqueda para que busque el alumno con el dni introducido
            if(i!=-1) {			//si es distinto de -1 se ejecutara esta accion
                cout<<"Introduzca los datos nuevos del alumno"<<endl;
                alumno al= crearalumno();		//se modificara un alumno de dicha estructura que llamara a la funcion crearalumno para introducir de nuevo todos sus datos
                alumnos[i] = al;		//se guardara en la posicion i
                cout<<"alumno modificado"<<endl;
            }
            else {		//si no se encuentra el dni se ejecutara esta accion
                cout<<"El dni no se escuentra entre los dni registrados"<<endl;
            }
            guarda(ruta, alumnos, 100);			//guardara el alumno modificado
        }
        break;
        case 5: {		//en caso de que el numero introducido sea 5 se ejecutara esta accion
            string dni;		//se creara una cadena con el dni para que el usuario pueda introducir el dni para buscarlo
            cout<<"Introduzca el dni del alumno para eliminar sus datos"<<endl;
            cin>>dni;
            int i=busqueda(alumnos, 100, dni);			//se creara una variable que llamara a la funcion busqueda para que busque el alumno con el dni introducido
            if(i!=-1) {		//si es distinto de -1 se ejecutara esta accion
                eliminar(alumnos, i);		//se eliminara el alumno en posicion i
            }
            else {		//si no se encuentra el dni se ejecutara esta accion
                cout<<"El dni no se escuentra entre los dni registrados"<<endl;
            }
            guarda(ruta, alumnos, 100);			//guardara el alumno eliminado
        }
        break;
        }
    } while(opcion_menu!=6);
}