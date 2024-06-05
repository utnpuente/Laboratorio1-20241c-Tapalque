/*
    Un negocio tiene un listado de las ventas realizadas el �ltimo mes.
    Cada registro consta con la siguiente info:

    Registro:
    - N�mero de Art�culo
    - Precio
    - Cantidad

    El ingreso finaliza cuando se ingresa n�mero de art�culo igual 0


    - Cantidad de ventas
    - Descuento por llevar m�s de 10 cantidades de la misma venta (10%)
    - El mayor importe
    - N�mero de art�culos con menor cantidad vendida por venta

*/

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int nroArt, cantidad;
    float precio;


    // PUNTO A
    int contVentas = 0;

    // PUNTO B
    float precioPorVentaFinal;

    // PUNTO C
    float importeMayor = -1;
    float importe;

    // PUNTO D
    int menorCantidadArticulos = 0;
    int numeroArticuloConMenorCantidadVendida;

    // PRIMER INGRESO
    cout << "Ingrese el n�mero del art�culo: ";
    cin >> nroArt;

    while(nroArt != 0)
    {
        cout << "Ingrese el precio: $";
        cin >> precio;
        cout << "Ingrese la cantidad: ";
        cin >> cantidad;
        //-----------------------------//

        // PUNTO A
        contVentas++;

        //-------------------------------//

        // PUNTO B
        if(cantidad > 10)
        {
            precio = precio * 0.9;
            precioPorVentaFinal = precio * cantidad;
            cout << "PUNTO B: El precio a pagar es: " << precioPorVentaFinal << endl;
        }

        //-------------------------------//
        // PUNTO C
        importe = precio * cantidad;

        if(importeMayor == -1 || importe > importeMayor)
        {
            importeMayor = importe;
        }

        //---------------------------------//
        // PUNTO D

        if(menorCantidadArticulos == 0 || cantidad < menorCantidadArticulos)
        {
            numeroArticuloConMenorCantidadVendida = nroArt;
            menorCantidadArticulos = cantidad;
        }

        //---------------------------------//
        // SIGUIENTE INGRESO
        cout << endl << "------------------------" << endl;
        cout << "Ingrese el n�mero del art�culo: ";
        cin >> nroArt;
    }

    cout << endl << "-----------------------" << endl;
    cout << "PUNTO A: La cantidad de ventas fue de " << contVentas << endl;
    cout << "PUNTO C: El importe mayor fue de $" << importeMayor << endl;
    cout << "PUNTO D: Elart�culo que menor cantidad vendio en una venta fue: " << numeroArticuloConMenorCantidadVendida << endl;


    return 0;
}






