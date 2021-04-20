#include "triangulo.h"

//CONSTRUCTORES TRIANGULO

Triangulo::Triangulo(): FiguraGeometrica() {}

Triangulo::Triangulo(float base, float altura): FiguraGeometrica()
{

    this->base = base;
    this->altura = altura;
}

//METODOS TRIANGULO

void Triangulo::calcularArea()
{
    area = (base * altura) / 2;
}

void Triangulo::calcularPerimetro()
{
    float temp;
    temp = base / 2;
    perimetro = 2 * ((sqrt((temp * temp)) + (altura * altura))) + base;
}

void Triangulo::mostrarFigura(){
    cout << "La base es: " << base << endl;
    cout << "La altura es: " << altura << endl;
    if( area == 0 ){
        this->calcularArea();
    }
    if( perimetro == 0 ){
        this->calcularPerimetro();
    }
    cout << "El area es: " << area << endl;
    cout << "El perimetro es: " << perimetro << "\n\n";
}