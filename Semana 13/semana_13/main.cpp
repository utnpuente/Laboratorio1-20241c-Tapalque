/*
    Hacer un programa que realice 100 tiradas de 3 dados de 6 caras.
    El programa debe calcular y mostrar la cantidad de veces que una
    tirada produjo que todos los dados sean iguales.
*/

#include <iostream>
#include <time.h>
#include "funciones.h"
#include "utn.h"
using namespace std;


#define ROJO 1
#define VERDE 2
#define AMARILLO 3
#define AZUL 4
#define MAGENTA 5
#define CIAN 6
#define BLANCO 7


int main()
{
    // Semilla
    srand(time(NULL));

    //const int TIRADAS = 100;
    int d1, d2, d3;
    int tirada;
    int contIguales = 0;
    bool iguales;

    utn::esconderCursor();
    for(int i = 1; i <=7; i++)
    {
        utn::definirColor(i);
        utn::gotoxy(i*3,4);
        cout <<"*";
        utn::sleep(500);
    }

    utn::gotoxy(1,7);
    cout << endl << "DADOS RANDOM" << endl;
    utn::sleep(2000);

    utn::mostrarCursor();
    cout << "Ingrese un número: ";
    cin >> tirada;

    utn::esconderCursor();

    for(int i = 0; i < tirada; i++)
    {
        tirarDados(d1, d2, d3);
        iguales = sonIguales(d1, d2, d3);

        if(iguales == true)
        {
            utn::definirColor(AZUL);
            mostrarDados(d1, d2, d3);
            utn::resetColor();
            contIguales++;
        }

    }
    utn::definirColor(AMARILLO);
    cout << "Las tiradas que salieron iguales fueron " << contIguales << endl;
    utn::resetColor();

    return 0;
}

