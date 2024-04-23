/*

    Hacer un programa para calcular los autos que debemos alquilar para llevar a la
    familia al campo.

    Autos de 5 - 1000
    Autos de 2 - 700
    Motos de 1 - 500

    Indicando por teclado la cantidad de Autos y motos a alquiler, calcule el costo.
*/

#include <iostream>
using namespace std;

int main()
{
    int familia;
    int cantAuto5, cantAuto2, cantMotos;

    const float PRECIO_AUTO5 = 1000;
    const float PRECIO_AUTO2 = 700;
    const float PRECIO_MOTO = 500;

    cout << "Ingrese la cantidad de familiares que viajan al campo: ";
    cin >> familia;

    // Proceso
    cantAuto5 = familia / 5; // cociente - Cantidad de auto
    int familiaSinAuto = familia % 5; // Resto - Familia sin asignar

    // cout << "#1" << cantAuto5 << endl;
    // cout << "#2" << familiaSinAuto << endl;

    cantAuto2 = familiaSinAuto / 2;
    familiaSinAuto = familiaSinAuto % 2;

    // cout << "#3" << cantAuto2 << endl;
    // cout << "#4" << familiaSinAuto;

    cantMotos = familiaSinAuto / 1;
    familiaSinAuto = familiaSinAuto % 1;

    float total = cantAuto5 * PRECIO_AUTO5;
    // total = total + cantAuto2 * PRECIO_AUTO2;
    // total = total + cantMotos * PRECIO_MOTO;
    total += cantAuto2 * PRECIO_AUTO2;
    total += cantMotos * PRECIO_MOTO;

    cout << endl << " ---------------------------- " << endl;
    cout << "Cantidad de autos de 5 persona: " << cantAuto5 << endl;
    cout << "Cantidad de autos de 2 persona: " << cantAuto2 << endl;
    cout << "Cantidad de motos de 1 persona: " << cantMotos;
    cout << endl << " ---------------------------- " << endl;
    cout << "El total a pagar es de $" << total;

    return 0;
}