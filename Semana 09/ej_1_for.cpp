/*
    Un negocio tiene un listado de las ventas realizadas el �ltimo mes.
    Cada registro consta con la siguiente info:

    Registro:
    - N�mero de Art�culo
    - Precio
    - Cantidad

    El ingreso finaliza cuando se ingresa n�mero de art�culo igual 0
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
        cout << "Ingrese el n�mero del art�culo: ";
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






