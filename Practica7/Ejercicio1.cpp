#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

struct alumno {		//creamos la estructura alumno que recopilara varias variables y dentro de esta habra tambien funciones y aunque se pueden poner fuera de la estructura, al escribirlos dentro prevenimos posibles errores que pueda haber
    int dni=0;
    int edad=0;
    int nota=0;
    void introduciralumno() {		//esta funcion dentro de la estructura alumno servira para crear un nuevo alumno o en el caso de querer modificar un alumno introduciendo de nuevo todos sus datos
        cout<<"Introduzca el dni del alumno"<<endl;		//se pide al usuario los datos del alumno para que los introduzca
        cin>>dni;
        cout<<"Introduzca la edad del alumno"<<endl;
        cin>>edad;
        cout<<"Introduzca la nota del alumno"<<endl;
        cin>>nota;
        cout<<endl;
    }
    void imprime() {		//esta funcion dentro de la estructura alumno servira para imprimir el valor de la edad y la nota del alumno cuando se introduzca previamente el dni
        cout<<"La edad del alumno es"<<endl;
        cout<<edad<<endl;
        cout<<"La nota del alumno es"<<endl;
        cout<<nota<<endl;
        cout<<endl;
    }
    void modificadni() {		//esta funcion dentro de la estructura alumno servira en caso de querer modificar solamente el dni para que sea mas practico en vez de tener que modificar todo
        cout<<"Introduce el nuevo dni"<<endl;
        cin>>dni;
        cout<<endl;
    }
    void modificaedad() {		//esta funcion dentro de la estructura alumno servira en caso de querer modificar solamente la edad para que sea mas practico en vez de tener que modificar todo
        cout<<"Introduce la nueva edad"<<endl;
        cin>>edad;
        cout<<endl;
    }
    void modificanota() {		//esta funcion dentro de la estructura alumno servira en caso de querer modificar solamente la nota para que sea mas practico en vez de tener que modificar todo
        cout<<"Introduce la nueva nota"<<endl;
        cin>>nota;
        cout<<endl;
    }
};		//indicacion de que aqui finaliza la estructura alumno

void menu() {		//esta funcion servira para mostrar en pantalla el menu inicial y las posibilidades que podemos hacer introduciendo un numero por teclado
    cout<<"Seleccione una opcion"<<endl;
    cout<<"1.  Insertar alumno"<<endl;
    cout<<"2.  Imprimir datos alumno"<<endl;
    cout<<"3.  Imprimir datos todos alumnos"<<endl;
    cout<<"4.  Modificar alumno"<<endl;
    cout<<"5.  Eliminar un alumno"<<endl;
    cout<<"6.  Salir"<<endl;
    cout<<endl;
}

int busqueda(alumno alumnos[], int na, int dni) {		//esta funcion de tipo int servira para buscar una alumno entre los ya registrados mediante el dni introducido con anterioridad
    for(int i=0; i<na; i++) {		//se utiliza este bucle para buscar entre los numero de alumnos (na) ya registrados
        if(alumnos[i].dni==dni) {		//en caso de que encuentre en el vector alumno en posicion i el dni que hemos introducido con anterioridad se ejecutara esta accion
            return i;		//se devolvera el numero de la posicion en el que se encuentre el alumno con el dni introducido
        }
    }
    return -1;		//en caso de que el dni introducido no se encuentre entre los alumnos registrados devolvera el valor de -1
}

void imprimetodos(alumno alumnos[], int na) {		//esta funcion servira para imprimir todos los datos de todos los alumnos introducidos hasta el momento de darle la indicacion
    if(na>0) {		//en el caso de que haya algun alumno se ejecutara esta accion
        for(int i=0; i<na; i++) {		//este bucle servira para imprimir por pantalla todos los datos de los na alumnos introducidos
            cout<<"El dni del alumno es"<<endl;
            cout<<alumnos[i].dni<<endl;
            cout<<"La edad del alumno es"<<endl;
            cout<<alumnos[i].edad<<endl;
            cout<<"La nota del alumno es"<<endl;
            cout<<alumnos[i].nota<<endl;
            cout<<endl;
        }
    }
    else {		//en el caso de que el numero de alumnos sea igual o menor que cero significara que aun no se ha registrado ningun alumno y se ejecutara esta accion que imprimira por pantalla que aun no se ha registrado ningun alumno
        cout<<"No hay ningun alumno registrado aun"<<endl;
        cout<<endl;
    }
}

void menumod() {		//esta funcion imprimira por pantalla el menu para modificar los datos del alumno y hacerlo asi mas practico si solo quieres cambiar un solo dato y no tener que repetirlos todos aunque tambien se pueden repetir todos si se desea
    cout<<"Que desea modificar"<<endl;
    cout<<"1.  Modificar dni"<<endl;
    cout<<"2.  Modificar edad"<<endl;
    cout<<"3.  Modificar nota"<<endl;
    cout<<"4.  Modificar todo"<<endl;
    cout<<"5.  Volver"<<endl;
    cout<<endl;
}

void eliminar(alumno alumnos[], int na, int i) {		//esta funcion servira para eliminar el alumno seleccionado mediante la introduccion y busqueda previa del dni
    alumnos[i].dni=alumnos[na].dni;		//cambiara el dni de la posicion en la que este el alumno que queramos eliminar por el ultimo alumno registrado para evitar dejar ningun hueco
    alumnos[i].edad=alumnos[na].edad;		//cambiara la edad de la posicion en la que este el alumno que queramos eliminar por el ultimo alumno registrado para evitar dejar ningun hueco
    alumnos[i].nota=alumnos[na].nota;		//cambiara la nota de la posicion en la que este el alumno que queramos eliminar por el ultimo alumno registrado para evitar dejar ningun hueco

}

int main() {
    alumno alumnos[10];		//se creara el vector alumnos de 10 elementos que tenga la estructura de alumno
    int na=0;		//se declara la variable que nos servira para saber el numero de alumnos registrados
    int opcion_menu=0;		//se declara la variable que nos servira para saber que opcion del menu elejiremos
    do {		//se abre un bucle do while que se ejecutara hasta que el usuario presione la opcion de salir que en este caso es la opcion 6
        menu();		//se llama a la funcion menu que imprimira el menu en pantalla con todas las posibilidades que podemos hacer
        cin>>opcion_menu;		//se introducira la opcion que queramos ejecutar
        switch(opcion_menu) {		//se creara un bucle switch de la variable opcion_menu para ejecutar en cada caso la accion que elijamos
        case 1: {		//en caso de que el numero introducido el numero 1 se ejecutara esta accion
            if(na<10) {		//si el numero de alumnos registrados no ha superado el limite del vector (10 en este caso) se ejecutara esta accion
                alumnos[na].introduciralumno();		//se llamara a la funcion para crear un alumno en la posicion na
                na++;		//se incrementara en uno el numero de alumnos puesto que ya hemos introducido uno
                cout<<endl;		//para dejar hueco entre la ultima opcion y la siguiente que sera el menu de nuevo
            }
            else {		//en caso de que el numero de alumnos sea igual o mayor que 10 se ejecutara esta accion que mostrara en pantalla que el numero de alumnos ha superado el numero de alumnos previsto
                cout<<"No se pueden añadir mas alumnos, se ha excedido la capacidad"<<endl;
                cout<<endl;
            }
        }
        break;
        case 2: {		//en caso de que el numero introducido el numero 2 se ejecutara esta accion
            int dni;		//se declara la variable del dni que sera el que queramos imprimir por pantalla
            cout<<"Introduce el dni del alumno para imprimir sus datos"<<endl;
            cin>>dni;		//se introducira el dni para buscarlo entre los alumnos introducidos para imprimir sus datos
            int i=busqueda(alumnos, na, dni);		//se llama a la funcion busqueda para buscar el dni introducido del alumno del vector alumnos con na numero de alumnos y se devolvera su posicion en caso de encontrarlo o -1 en caso de que no y se almacenara en la variable i declarada ahora
            if(i!=-1) {		//si i es diferente de -1 significara que ha encontrado el alumno con el dni introducido y que se encuentra en la posicion i y se ejecutara esta accion
                alumnos[i].imprime();		//se llamara a la funcion imprime la cual imprimira por pantalla los datos del alumnos del dni introducido que se encuentra en la posicion i
                cout<<endl;
            }
            else {		//si i tiene el valor de -1 se ejecutara esta accion y significara que el dni no se ha encontrado entre los alumnos registrados y en ese caso se imprimira por panatalla esta aclaracion
                cout<<"El dni no se encuentra entre los alumnos registrados"<<endl;
                cout<<endl;
            }
        }
        break;
        case 3: {		//en caso de que el numero introducido el numero 3 se ejecutara esta accion
            imprimetodos(alumnos, na);		//se llamara a la funcion imprimetodos que imprimira por pantalla todos los alumnos (na) que se encuenten en el vector alumnos
        }
        break;
        case 4: {		//en caso de que el numero introducido el numero 4 se ejecutara esta accion
            int dni, opcion;		//se declara la variable dni para buscar este dni para modificar sus valores y la variable opcion para elegir una opcion de modificacion del menu
            cout<<"Introduce el dni del alumno para modificar sus datos"<<endl;
            cin>>dni;		//se introducira el dni para buscarlo para modificar sus datos
            int i=busqueda(alumnos, na, dni);		//se llama a la funcion busqueda para buscar el dni introducido del alumno del vector alumnos con na numero de alumnos y se devolvera su posicion en caso de encontrarlo o -1 en caso de que no y se almacenara en la variable i declarada ahora
            if(i!=-1) {		//si i es diferente de -1 significara que ha encontrado el alumno con el dni introducido y que se encuentra en la posicion i y se ejecutara esta accion
                do {		//se abre un bucle do while que se ejecutara hasta que el usuario presione la opcion de volver que en este caso es la opcion 5
                    cout<<"Los datos de este dni son"<<endl;
                    alumnos[i].imprime();		///se llamara a la funcion imprime la cual imprimira por pantalla los datos de este dni para tenerlos mas a mano para ver las modificaciones que se quieran hacer o que se hayan hecho
                    cout<<endl;
                    menumod();		//se llama a la funcion menumod que imprimira el menu en pantalla con todas las modificaciones que podemos hacer
                    cin>>opcion;		//se introducira la opcion que queramos ejecutar
                    switch(opcion) {		//se creara un bucle switch de la variable opcion para ejecutar en cada caso la accion que elijamos para hacerlo mas optimo si solo queremos modificar una opcion en vez de modificarlo todo de nuevo aunque hay una opcion tambien para modificarlo todo por si se desea
                    case 1: {		//en caso de que el numero introducido el numero 1 se ejecutara esta accion
                        alumnos[i].modificadni();		//se llamara a la funcion modificadni dentro de la estructura alumno para modificar solamente el dni del alumno seleccionado
                    }
                    break;
                    case 2: {		//en caso de que el numero introducido el numero 2 se ejecutara esta accion
                        alumnos[i].modificaedad();		//se llamara a la funcion modificaedad dentro de la estructura alumno para modificar solamente la edad del alumno seleccionado
                    }
                    break;
                    case 3: {		//en caso de que el numero introducido el numero 3 se ejecutara esta accion
                        alumnos[i].modificanota();		//se llamara a la funcion modificanota dentro de la estructura alumno para modificar solamente la nota del alumno seleccionado
                    }
                    break;
                    case 4: {		//en caso de que el numero introducido el numero 4 se ejecutara esta accion
                        alumnos[i].introduciralumno();		//se llamara a la funcion introduciralumno dentro de la estructura alumno para introducir nuevamente todos los datos
                    }
                    break;
                    cout<<endl;
                    }
                } while(opcion!=5);		//este bucle se ejecutara hasta que la opcion introducida sea 5 que en este caso da la accion de volver al menu anterior
            }
            else {		//si i tiene el valor de -1 se ejecutara esta accion y significara que el dni no se ha encontrado entre los alumnos registrados y en ese caso se imprimira por panatalla esta aclaracion
                cout<<"El dni no se encuentra entre los alumnos registrados"<<endl;
                cout<<endl;
            }
        }
        break;
        case 5: {		//en caso de que el numero introducido el numero 5 se ejecutara esta accion
            int dni;
            cout<<"Introduce el dni del alumno para eliminar sus datos"<<endl;
            cin>>dni;		//se introducira el dni para buscarlo para eliminar sus datos
            int i=busqueda(alumnos, na, dni);		//se llama a la funcion busqueda para buscar el dni introducido del alumno del vector alumnos con na numero de alumnos y se devolvera su posicion en caso de encontrarlo o -1 en caso de que no y se almacenara en la variable i declarada ahora
            if(i!=-1) {		//si i es diferente de -1 significara que ha encontrado el alumno con el dni introducido y que se encuentra en la posicion i y se ejecutara esta accion
                eliminar(alumnos, na, i);		//se llama a la funcion eliminar que eliminara el alumno en posicion i y para ello le dara los datos del ultimo alumno registrado en el vector alumno en posicion na
                na--;		//se le restara uno al numero de alumnos en el vector alumnos ya que se ha eliminado el alumno con el dni introducido
                cout<<endl;
            }
            else {		//si i tiene el valor de -1 se ejecutara esta accion y significara que el dni no se ha encontrado entre los alumnos registrados y en ese caso se imprimira por panatalla esta aclaracion
                cout<<"El dni no se encuentra entre los alumnos registrados"<<endl;
                cout<<endl;
            }
        }
        break;
        }
    } while(opcion_menu!=6);		//este bucle se ejecutara hasta que la opcion introducida sea 6 que en este caso finalizara el programa
}