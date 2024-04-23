/*
    Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
    por un operario y el valor que se le paga por hora trabajada y listar por pantalla
    el sueldo que le corresponda.
*/

#include <iostream>
using namespace std;

int main()
{
    int cantHoras;
    float valorHora;

    cout << "Ingresar cantidad de horas trabajadas: ";
    cin >> cantHoras;

    cout << "Ingresar valor de la hora trabajada: $";
    cin >> valorHora;

    float sueldo = cantHoras * valorHora;

    cout << endl;
    cout << "Total a pagar $: " << sueldo;

    return 0;
}