#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct contacto{
    string nombre;
    string apellido;
    double telefono;
};

enum opciones{
    SALIR = 0, CREAR = 1, AGREGAR = 2, VISUALIZAR = 3
};

void nuevoContacto( contacto &x ){
    cout << "Ingresa el/los nombre(s): ";
    cin.ignore();
    getline( cin, x.nombre );
    cout << "Ingresa el/los apellido(s): ";
    //cin.ignore();
    getline( cin, x.apellido );
    cout << "Ingresa el numero de telefono: ";
    cin >> x.telefono;
    cout << endl;
}

void agendarContacto( contacto x ){
    ofstream f( "Agenda.txt", ios::app );
    f << x.nombre << "\t" << x.apellido << "\t" << x.telefono << endl;
    f.close();
}

void mostrarAgenda(){
    ifstream f( "Agenda.txt" );
    string x;
    while( getline( f, x )){
        cout << x;
        cout << endl;
    };
    f.close();
}

void mostrarMenu(){
    int opc;
    contacto x;
    do{
        cout << "================" << endl;
        cout << "      MENU      " << endl;
        cout << "================" << endl;
        cout << "Ingrese alguna de las siguientes opciones: " << endl;
        cout << "1. Crear contacto" << endl << "2. Agregar contacto" << endl <<
        "3. Ver agenda" << endl << "0. Salir del menu" << endl;
        cout << "Opcion: ";
        cin >> opc;
        switch( opc ){
            case CREAR:
                nuevoContacto( x );
                system( "PAUSE ");
                break;
            case AGREGAR:
                agendarContacto( x );
                system( "PAUSE ");
                break;
            case VISUALIZAR:
                mostrarAgenda();
                system( "PAUSE ");
                break;
        }
    }while( opc != SALIR );
}

int main(){
    mostrarMenu();
    return 0;
}