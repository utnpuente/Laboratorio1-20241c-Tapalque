/*
    Hacer un programa para ingresar una lista de números que finaliza cuando se
    ingresa un cero, luego informar cuántos son positivos y cuántos son negativos.
    Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.

    Para resolver este ejercicio sugerimos resolver antes el TP3 EJ 7

    ----

    Hacer un programa para ingresar una lista de 10 números, luego informar
    cuántos son positivos, cuántos son negativos, y cuántos iguales a cero

*/



#include <iostream>
using namespace std;

int main()
{
    int ingreso = 1, contPos = 0, contNeg = 0;
//
    cout << "Ingrese un número: ";
    cin >> ingreso; //Inicializador

    while(ingreso != 0) //Condicion - Lista de número que corta en 0
    {

        if(ingreso > 0) // Averigua positivos
        {
            contPos++;
        }
        else //AVerigua negativos
        {
            contNeg++;
        }

        cout << "Ingrese un número: ";
        cin >> ingreso; // Modificador
    }

    cout << "La cantidad de números positivos fue de: " << contPos << endl;
    cout << "La cantidad de números negativos fue de: " << contNeg << endl;

    return 0;
}






