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

int main(){
    persona x;
    x = leerDatos();
    
    return 0;
}
