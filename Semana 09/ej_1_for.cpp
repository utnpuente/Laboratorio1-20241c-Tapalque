/*
    Un negocio tiene un listado de las ventas realizadas el último mes.
    Cada registro consta con la siguiente info:

    Registro:
    - Número de Artículo
    - Precio
    - Cantidad

    El ingreso finaliza cuando se ingresa número de artículo igual 0
*/

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int nroArt, cantidad;
    float precio;

    for(int i = 0; i < 3; i++)
    {
        cout << "Ingrese el número del artículo: ";
        cin >> nroArt;
        cout << "Ingrese el precio: $";
        cin >> precio;
        cout << "Ingrese la cantidad: ";
        cin >> cantidad;
        cout << endl << "------------------------" << endl;
        //-----------------------------//



    }


    return 0;
}






