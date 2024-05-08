#include <iostream>
using namespace std;

int main()
{
    system("cls");

    // Proposiciones lógicas
    int num;

    num + 10;
    num / 2;
    num % 6;

    // Operador relacionales
    // valor OPERADOR valor
    /*
     > mayor que
     < menor que
     >= mayor o igual que
     <= menor o igual que
     != diferente
     == igualdad

     true == 1
     false == 0
    */

    bool resultadoNum = num < 10;
    num == 2;
    num != 6;

    // Correctos

    const int PI = 3.1416;

    num == PI;
    num == 10;
    num != 'A';
    num == false;

    // No correctos
    num = 9; // No es igualdad
    num > 10 < 9;
    10 > 18;

    bool verdadero = 1;


    if (false)
    {
        // Instrucciones
    }

    system("pause > nul");
    return 0;
}