//#ifndef RECTANGULO_H
// Guardas
//#define RECTANGULO_H

//CLASE RECTANGULO
#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

#include "FiguraGeometrica.h"

class Rectangulo : public FiguraGeometrica
{
private:
    float ancho, largo;

public:
    Rectangulo(); //no olvidar
    Rectangulo(float, float);
    void mostrarFigura() const;
    virtual void calcularArea() override;
    virtual void calcularPerimetro() override;
    virtual void mostrarFigura() override;
    float getLargo();
    float getAncho();
    void setLargo(float);
    void setAncho(float);
};

//#endif /* !RECTANGULO_H */