#include<iostream>
#define IVA 0.19

using namespace std;

float agregarIva( float precio ){
    return precio*( 1 + IVA );
}

int main(){
    float precio, precio_mod;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;
    precio_mod = agregarIva( precio );
    cout << "El precio del producto con IVA incluido es: " << precio_mod << endl;
    return 0;
}