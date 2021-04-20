#include "Circulo.h"

//Inicializa la variable PI que es estática y constante
const float Circulo::PI = 3.1416;

//CONSTRUCTORES CIRCULO
Circulo::Circulo(): FiguraGeometrica()
{
}

Circulo::Circulo(float radio) : Circulo()
{

    this->radio = radio;
}

//METODOS CIRCULO

void Circulo::calcularArea()
{
    area = PI * (radio * radio);
}

void Circulo::calcularPerimetro()
{
    perimetro = (2 * PI) * radio;
}

void Circulo::mostrarFigura()
{
    cout << "El radio es: " << radio << endl;
    if( area == 0 ){
        this->calcularArea();
    }
    if( perimetro == 0 ){
        this->calcularPerimetro();
    }
    cout << "El area es: " << area << endl;
    cout << "El perimetro es: " << perimetro << "\n\n";
}

float Circulo::getRadio() const
{

    return this->radio;
}

void Circulo::setRadio(float radio)
{

    this->radio = radio;
}