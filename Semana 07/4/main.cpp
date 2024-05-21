#include <iostream>
using namespace std;

/*
    15 Hacer un programa para ingresar 5 n£meros, luego informar los 2 mayores valores ingresados, aclarando cual es el m ximo y cu l el que le sigue.

    Ejemplo A: 10, 8, 12, 14, 3 el resultado ser  14 y 12.
    Ejemplo B: 14, 8, 12, 14 ,3 el resultado ser  14 y 14.
    Ejemplo C: -4, -8, -12, -20, -2 el resultado ser  -2 y -4
    Ejemplo D: 100, 20, 5, - 15, 70, el resultado ser  100 y 70

    Se recomienda probar el diagrama que vaya a desarrollar con todos los ejemplos, en particular el Ejemplo D, en el cual el m ximo de la lista aparece en el primer lugar y que si no se tiene precauci¢n puede llevar a  esultados como 100 como m ximo y 100 como segundo m ximo. ­ESO ES INCORRECTO! El resultado debe  ser 100 y 70.
*/

/*
    
10
8
12
14
3

14
8
12
14
3

-4
-8
-12
-20
-2

100
20
5
-15
70
*/

// Lista de 5 numeros
// Informar 2 mayores valores

int main()
{
    system("cls");

    int nro;
    int primerMaximo;
    int segundoMaximo;

    for (int i = 0; i < 5; i++) // Listado de n£meros
    {
        cout << "Ingrese n£mero: ";
        cin >> nro;

        if (i == 0) // Primer ingreso
        {
            primerMaximo = nro;
        }
        else
        {
            if (nro > primerMaximo) // Numero es mayor al primer ingreso
            {
                segundoMaximo = primerMaximo;
                primerMaximo = nro;
            }
            else if (nro > segundoMaximo || i == 1) // Numero es mayor al segundo ingreso o es segunda vuelta
            {
                segundoMaximo = nro;
            }
        }
        
    }

    cout << "Primer m ximo " << primerMaximo << endl;
    cout << "Segundo m ximo " << segundoMaximo << endl;

    system("pause > nul");
    return 0;
}