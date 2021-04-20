#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

#include "FiguraGeometrica.h"

class Cuadrado : public FiguraGeometrica
{
private:
    float lado;

public:
    Cuadrado();
    Cuadrado( float );
    virtual void calcularArea() override;
    virtual void calcularPerimetro() override;
    virtual void mostrarFigura() override;
    float getLado() const;
    void setLado( float );
};