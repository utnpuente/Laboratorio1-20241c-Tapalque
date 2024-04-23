/*
    Hacer un programa para ingresar por teclado la cantidad de asientos totales en
    un avión y la cantidad de pasajes ocupados y luego calcular e informar el
    porcentaje de ocupación y el porcentaje de no ocupación del mismo.
    Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el
    porcentaje de ocupación que se informará será de un 40% y el porcentaje de no
    ocupación será de un 60%
*/


#include <iostream>
using namespace std;

int main() {

    int asientosTotales, asientosVendidos;

    cout << "Ingrese la cantidad de asientos totales: ";
    cin >> asientosTotales;

    cout << "Ingresen la cantidad de pasajes vendidos: ";
    cin >> asientosVendidos;

    // Procesos
    float porcOcupacion = (float)asientosTotales * 100 / asientosTotales;
    // float porcOcupacion = asientosVendidos * 100.0 / asientosTotales;
    float porcDisponibles = 100 - porcOcupacion;

    cout << endl;
    cout << "Porcentaje de ocupacion: " << porcOcupacion << "%" <<endl;
    cout << "Porcentaje disponible: " << porcDisponibles << "%";

    return 0;
}