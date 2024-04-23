/*
    Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más
    $700 de premio por cada auto vendido. Hacer un programa que permita
    ingresar por teclado la cantidad de autos vendidos por un vendedor y luego
    informar por pantalla el sueldo total a pagar.
    Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a
    pagar es de $7800.
*/

#include <iostream>
using namespace std;

int main() {

    const float COSTO_COMISION = 700;
    const float COSTO_SUELDO = 5000;

    int cantVendidos;
    float sueldo;

    cout << "Ingrese la cantidad de autos vendidos: ";
    cin >> cantVendidos;

    float comision = cantVendidos * COSTO_COMISION;

    sueldo = COSTO_SUELDO + comision;

    cout << endl;
    cout << "Total a pagar: $" << sueldo;

    return 0;
}