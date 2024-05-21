#include <iostream>
using namespace std;

// Variable Control

/*
    Dada una lista de 10 n£meros, indicar cu l es el segundo ingreso
*/

int main()
{
    system("cls");

    int edad;
    int edadSegundoMenor;

    int contadorMenores = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese la  edad: ";
        cin >> edad;

        if (edad <= 18)
        {
            contadorMenores++;

            if(contadorMenores == 2)
            {
                edadSegundoMenor = edad;
            }
        }
    }

    cout << "La edad del segundo menor fue de " << edadSegundoMenor << endl;

    system("pause > nul");
    return 0;
}