#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

/*
    Tenemos que tomar los TPI de los alumnos y alumnas del Trayecto formativo. Este listado
    corta con el ingreso de número de grupo igual a cero.

    Por cada grupo se verifica si es correcto o incorrecto (bool) cada una de las 4 partes:
    estructura, A, B y C

    Se pide determinar:

    a) Cuántos programas tienen al menos una falla
    b) Indiocar cuando el programa no compila (Cuando todos los puntos están mal)
*/


#include <iostream>
using namespace std;

int main()
{
    system("cls");
    setlocale(LC_ALL, "spanish");

    // Semilla de random
    srand(time(NULL));

    int nroGrupo;
    bool esCorrecto;
    bool esIncorrecto;
    int cantProgramasConFallas = 0;
    int nota;


    cout << "Ingrese un número: ";
    cin >> nroGrupo;

    while (nroGrupo != 0) // Se encarga de los grupos
    {
        esIncorrecto = false;

        for (int i = 0; i < 4; i++)
        {

            cout << "Ingrese si la parte " << i + 1 << " es correcta o no (1/0)";
            cin >> esCorrecto;

            if(!esCorrecto)
            {
                esIncorrecto = true;

                // Poner una nota de 1 a 5
                nota = (rand() % 5) + 1;
                cout << "Parte desaprobada con nota: " << nota << endl;

            }
            else
            {
                // poner una nota de 6 a 10
                nota = (rand() % 5) + 6;
                cout << "Parte aprobada con nota: " << nota << endl;

            }

        }

        if(esIncorrecto)
        {
            cantProgramasConFallas++;
        }


        cout << "-------------------" << endl;
        cout << "Ingrese un número: ";
        cin >> nroGrupo;
    }

    cout << endl << endl << "-------------------------------------" << endl;
    cout << "La cantidad de programas con fallas fue de " << cantProgramasConFallas << endl;

    system("pause > 0");
    return 0;
}


//int main()
//{
//    setlocale(LC_ALL, "spanish");
//
//
//    int nroGrupo;
//
//    cout << "Ingrese un número: ";
//    cin >> nroGrupo;
//
//    while (nroGrupo != 0)
//    {
//
//        for (int i = 0; i < 5; i++)
//        {
//            cout << "El número ingresado es " << nroGrupo << endl;
//
//
//            cout << "-------------------" << endl;
//
//            if(i == 4)
//                cout << "Puede ingresar 0 para terminar" << endl;
//
//            cout << "Ingrese un número: ";
//            cin >> nroGrupo;
//        }
//    }
//
//    return 0;
//}
