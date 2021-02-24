#include<iostream>

int const TAM = 10;

class Rectangulo{
private:
    float largo, ancho;
    
public:
    Rectangulo();
    Rectangulo( float, float );
    void calcularPerimetro();
    void calcularArea();
    float getLargo();
    void setLargo( float );
    void setAncho( float );
};

Rectangulo::Rectangulo(){
    this->largo = 0;
    this->ancho = 0;
}

Rectangulo::Rectangulo( float largo, float ancho ){
    this->largo = largo; 
    this->ancho = ancho;
}

void Rectangulo::setLargo( float largo ){
    this->largo = largo;
}

void Rectangulo::setAncho( float ancho ){
    this->ancho = ancho;
}

float Rectangulo::getLargo(){
    return this->largo;
}

void Rectangulo::calcularPerimetro(){
    float perimetro;
    perimetro = 2*( largo + ancho );
    std::cout << "El perimetro es: " << perimetro << std::endl;
}

void Rectangulo::calcularArea(){
    float area;
    area = largo*ancho;
    std::cout << "El area es: " << area << std::endl;
}

class Circulo{
    private:
        float radio;
        float PI;

    public:
        Circulo();
        Circulo( float );
        void calcularArea();
        void calcularPerimetro();
        void setRadio( float );
        float getRadio();
};

Circulo::Circulo(){
    this->radio = 0.0;
    this->PI = 3.1415926;
}

Circulo::Circulo( float radio ){
    this->radio = radio;
    this->PI = 3.1415926;
}

void Circulo::calcularArea(){
    float area;
    area = PI*radio*radio;
    std::cout << "El area es: " << area << std::endl;
}

void Circulo::calcularPerimetro(){
    float perimetro;
    perimetro = 2*PI*radio;
    std::cout << "El perimetro es: " << perimetro << std::endl;
}

float Circulo::getRadio(){
    return this->radio;
}

void Circulo::setRadio( float radio ){
    this->radio = radio;
}

class Triangulo{
    private:
        float base;
        float altura;

    public:
        Triangulo();
        Triangulo( float, float );
        void calcularArea();
        void calcularPerimetro();
        void setBase( float );
        void setAltura( float );
};

Triangulo::Triangulo(){
    this->base = 0;
    this->altura = 0;
}

Triangulo::Triangulo( float base, float altura ){
    this->base = base;
    this->altura = altura;
}

void Triangulo::setBase( float base ){
    this->base = base;
}

void Triangulo::setAltura( float altura ){
    this->altura = altura;
}

enum opciones{
    SALIR, CIRCULO, RECTANGULO, TRIANGULO
};

void mostrarMenu( Circulo c[], Rectangulo r[], Triangulo t[] ){

    int opc;
    int ci = 0, ri = 0, ti = 0;
    float radio, largo, ancho, base, altura;
    do{
        std::cout << "===============" << std::endl;
        std::cout << "MENU DE FIGURAS" << std::endl;
        std::cout << "===============" << std::endl;
        std::cout << "1. Nuevo circulo" << std::endl;
        std::cout << "2. Nuevo rectangulo" << std::endl;
        std::cout << "3. Nuevo triangulo" << std::endl;
        std::cout << "0. Salir" << std::endl;

        std::cout << "***opcion: ";
        std::cin >> opc;

        if( opc >= 0 && opc <= 3 ){
            switch( opc ){
                case CIRCULO:
                    if( ci < TAM ){
                        std::cout << "Ingrese el radio: ";
                        std::cin >> radio;
                        c[ ci ].setRadio( radio );
                        ci++;
                    }else{
                        std::cout << "Ya no queda espacio" << std::endl;
                    }
                    break;
                case RECTANGULO:
                    if( ri < TAM ){
                        std::cout << "Ingrese el largo: ";
                        std::cin >> largo;
                        std::cout << "Ingrese el ancho: ";
                        std::cin >> ancho;
                        r[ ri ].setLargo( largo );
                        r[ ri ].setAncho( ancho );
                        ri++;
                    }else{
                        std::cout << "Ya no queda espacio" << std::endl;
                    }
                    break;
                case TRIANGULO:
                    if( ti < TAM ){
                        std::cout << "Ingrese la base: ";
                        std::cin >> base;
                        std::cout << "Ingrese la altura: ";
                        std::cin >> altura;
                        t[ ti ].setBase( base );
                        t[ ti ].setAltura( altura );
                        ti++;
                    }else{
                        std::cout << "Ya no queda espacio" << std::endl;
                    }
                    break;
                case SALIR:
                    break;
            }
        }else{
            std::cout << "###Opcion no valida\n";
        }
        std::cout << "\n";
    }while( opc != SALIR );
}

int main(){
    Circulo circulo1( 4 );
    Circulo circulo2;
    circulo1.calcularArea();
    circulo1.calcularPerimetro();
    circulo2.calcularArea();
    circulo2.calcularPerimetro();

    std::cout << "El radio del circulo1 es: " << circulo1.getRadio() << std::endl;

    Circulo circulos[ TAM ];
    Rectangulo rectangulos[ TAM ];
    Triangulo triangulos[ TAM ];

    mostrarMenu( circulos, rectangulos, triangulos );

    return 0;
}