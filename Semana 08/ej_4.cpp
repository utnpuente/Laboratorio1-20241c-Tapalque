/*
     tenemos un saldo y queremos ir contando las cantidad de compras puede ir haciendo a
     medida que nos va ingresando un importe (Simple, no es exacto, incluso que le
     acepte un saldo negativo)
*/

#include <iostream>
using namespace std;

int main()
{

    float saldo = 1600; //Inicialización

    float importe;
    int contCompras = 0;

    while(saldo > 0) // Condición
    {
        cout <<"Ingrese el importe de la compra:";
        cin >> importe;


        saldo -= importe; //Modificador
        contCompras++;

    }


    cout << "La cantidad de compras que se pudieron realizar fue de: " << contCompras << endl;
    cout << "El saldo final es de " << saldo << endl;

    return 0;
}
