#include<iostream>
#include<string>

using namespace std;

struct contacto{
    string nombre;
    string apellidos;
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
    getline( cin, x.apellidos );
    cout << "Ingresa el numero de telefono: ";
    cin >> x.telefono;
    cout << endl;
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
                break;
            case AGREGAR:
                break;
            case VISUALIZAR:
                break;
        }
    }while( opc != SALIR );
}

int main(){
    mostrarMenu();
    return 0;
}