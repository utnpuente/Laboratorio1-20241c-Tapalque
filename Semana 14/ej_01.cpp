#include <iostream>
#include <string> // Librer�a para utilizaci�n de string
#include <string.h> //Librer�a H para utilizaci�n de m�todos con vectores de tipo char
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    //Valor constante para la declaracion de vectores
    const int TAM = 10;

    //Declaramos e inicializamos
    int nro[TAM]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Identificador sin indexaci�n
    //nro; ---> Apunta al primer elemento

    //int pos = 9;

    //nro[pos]; ---> Declaramos el elemento 9 del vector

    /*
        for(int i = 0; i < TAM; i++)
        {
            nro[i] = 0;
        }
    */

    // Mostrar vector
    for(int i = 0; i < TAM; i++)
    {
        cout << nro[x + 1] << "\t";
    }

    //Cadena de caracteres para palabras
    char nombre[10] = "Jose";
    cout << endl << nombre;

    return 0;
}







