/*
    Una estaci�n de servicio hace un control en 5 autos,
    de los cuales solicita n�mero de patente, a�o del auto
    y realiza una comprobaci�n de presi�n de sus 4 ruedas.

    a) Promedio de presi�n por cada uno de los auto. Un solo resultado.
    b) cantidad de autos con rueda pinchada (se determina con presi�n menor a 10)

*/

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    string patente;
    int anio;
    int presion;
    int cantidadDeAutoConRuedasPinchadas = 0;
    bool estaPinchadas;

    for(int automovil = 1; automovil <= 5; automovil++)
    {
        cout << "Ingrese la patente del auto: ";
        cin >> patente;
        cout << "Ingrese el a�o del auto: ";
        cin >> anio;

        estaPinchadas = false;

        for(int rueda = 1; rueda <= 4; rueda++)
        {

            cout << "Ingrese la presi�n de la rueda " << rueda << ": ";
            cin >> presion;


            if(presion < 10)
            {
                estaPinchadas = true;
            }

        }

        if(estaPinchadas == true)
        {
            cantidadDeAutoConRuedasPinchadas++;
        }

    }

    cout << "---------------------------------------" << endl;
    cout << "Cantidad de autos con ruedas pinchadas fue de " << cantidadDeAutoConRuedasPinchadas << endl;

    return 0;
}
