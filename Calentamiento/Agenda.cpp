#include<iostream>

using namespace std;

enum opciones{
    SALIR = 0, CREAR = 1, AGREGAR = 2, VISUALIZAR = 3
};

void mostrarMenu(){
    int opc;
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