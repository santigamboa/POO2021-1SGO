#include<iostream>
#include<stdio.h>

using namespace std;

struct persona{
    int edad;
    char sexo;
    float altura;
};

typedef struct persona persona;

persona leerDatos(){
    persona x;
    cout << "Ingrese la edad de la persona: ";
    cin >> x.edad;
    cout << "Ingrese el sexo de la persona (m/f): ";
    cin >> x.sexo;
    cout << "Ingrese la altura de la persona (en metros): ";
    cin >> x.altura;
    return x;
}

void mostrarDatos( persona x ){
    cout << "=====================" << endl;
    cout << "DATOS DE LA PERSONA: " << endl;
    cout << "=====================" << endl;
    cout << "Edad: " << x.edad << endl;
    cout << "sexo: " << x.sexo << endl;
    cout << "Altura: " << x.altura << endl;
}

int main(){
    persona x;
    x = leerDatos();
    mostrarDatos( x );
    return 0;
}
