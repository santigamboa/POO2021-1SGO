#include "Rectangulo.h"

//CONSTRUCTORES RECTANGULO

Rectangulo::Rectangulo(): FiguraGeometrica(){}

Rectangulo::Rectangulo(float ancho, float largo): FiguraGeometrica()
{

    this->ancho = ancho;
    this->largo = largo;
}

//METODOS RECTANGULO

void Rectangulo::calcularArea()
{
    area = largo * ancho;
}

void Rectangulo::calcularPerimetro()
{
    perimetro = (2 * largo) + (2 * ancho);
}

void Rectangulo::mostrarFigura()
{
    cout << "El ancho: " << ancho << " -- "
         << "el largo: " << largo << endl;
    if( area == 0 ){
        this->calcularArea();
    }
    if( perimetro == 0 ){
        this->calcularPerimetro();
    }
    cout << "El area es: " << area << endl;
    cout << "El perimetro es: " << perimetro << "\n\n";
}

float Rectangulo::getAncho()
{
    return this->ancho;
}

float Rectangulo::getLargo()
{
    return this->largo;
}

void Rectangulo::setAncho(float ancho)
{
    this->ancho = ancho;
}
void Rectangulo::setLargo(float largo)
{
    this->largo = largo;
}
