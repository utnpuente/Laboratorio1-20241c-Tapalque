/*
    Hacer un programa para ingresar una lista de n�meros que finaliza cuando se
    ingresa un cero, luego informar cu�ntos son positivos y cu�ntos son negativos.
    Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listar� Positivos: 4 Negativos: 2.

    Para resolver este ejercicio sugerimos resolver antes el TP3 EJ 7

    ----

    Hacer un programa para ingresar una lista de 10 n�meros, luego informar
    cu�ntos son positivos, cu�ntos son negativos, y cu�ntos iguales a cero

*/



#include <iostream>
using namespace std;

int main()
{
    int ingreso = 1, contPos = 0, contNeg = 0;
//
    cout << "Ingrese un n�mero: ";
    cin >> ingreso; //Inicializador

    while(ingreso != 0) //Condicion - Lista de n�mero que corta en 0
    {

        if(ingreso > 0) // Averigua positivos
        {
            contPos++;
        }
        else //AVerigua negativos
        {
            contNeg++;
        }

        cout << "Ingrese un n�mero: ";
        cin >> ingreso; // Modificador
    }

    cout << "La cantidad de n�meros positivos fue de: " << contPos << endl;
    cout << "La cantidad de n�meros negativos fue de: " << contNeg << endl;

    return 0;
}






