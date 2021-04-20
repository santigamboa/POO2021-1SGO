# include "Cuadrado.h"

Cuadrado::Cuadrado(){
}

Cuadrado::Cuadrado( float lado ){
    this->lado = lado;
}

void Cuadrado::calcularArea(){
    area = lado * lado;
}

void Cuadrado::calcularPerimetro(){
    perimetro = 4 * lado;
}

void Cuadrado::mostrarFigura(){
    cout << "El lado es: " << lado << endl;
    if( area == 0 ){
        this->calcularArea();
    }
    if( perimetro == 0 ){
        this->calcularPerimetro();
    }
    cout << "El area es: " << area << endl;
    cout << "El perimetro es: " << perimetro << "\n\n";
}

float Cuadrado::getLado() const{
    return this->lado;
}

void Cuadrado::setLado( float lado ){
    this->lado = lado;
}