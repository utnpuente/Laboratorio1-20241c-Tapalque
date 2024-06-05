/*
    un docente recibe un listado de notas y quiere saber el promedio de los alumnos.
*/


#include <iostream>
using namespace std;

int main()
{
    float nota, suma = 0;
    int cantNotas = 0;


    cout << "Ingrese una nota: ";
    cin >> nota; // Inicializacion

    while(nota >= 1 && nota <=10) // condicion
    {
        suma += nota;
        cantNotas++;

        cout << "Ingrese una nota: ";
        cin >> nota; // modificacion

    }

    cout << endl << " -------------------------------------- " << endl;
    cout << "La cantidad de notas fue de " << cantNotas << endl;
    cout << "El promedio fue de " << suma / cantNotas << endl;

    return 0;
}








