/*
    Hacer un programa que permita ingresar dos número
    enteros por teclado.
    Luego calcular e informar la suma de ellos.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int num1, num2, resultado;
    cout << "Ingrese dos numeros enteros:" << endl;
    cin >> num1;
    cin >> num2;

    resultado = num1 + num2;

    cout << endl;
    cout << "El resultado es: ";
    cout << resultado;

    system("pause");

     return 0;
}

/*
    Ingrese dos numeros enteros:
    10
    40

    El resultado es: 50
*/
