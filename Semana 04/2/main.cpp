/*
    Ingresar por teclado un numero y determinar si es positivo.
    Indicar cuando sea negativo.
    Indicar cuando es cero.
*/

#include <iostream>
using namespace std;

int main()
{
    system("cls");

    // bool esMenor = false;
    // int num;
    // cout << "Ingrese un numero: ";
    // cin >> num;

    // if (num > 0)
    // {
    //     cout << num << " es positivo" << endl;
    // }
    // else
    // {
    //     if (num < 0)
    //     {
    //         cout << num << " es negativo" << endl;
    //     }
    //     else
    //     {
    //         cout << num << " es cero" << endl;
    //     }
    // }

    // if(num > 0)
    // {
    //     cout << num << " es positivo" << endl;
    // }
    // else if(num < 0)
    // {
    //     cout << num << " es negativo" << endl;
    // }
    // else
    // {
    //     cout << num << " es cero" << endl;
    // }

    /* Determinar cuales son positivos */

    int a, b, c;
    cout << "Ingrese primer numero: ";
    cin >> a;
    // cout << "Ingrese segundo numero: ";
    // cin >> b;
    // cout << "Ingrese tercero numero: ";
    // cin >> c;

    // if (a > 0)
    // {
    //     cout << "a es positivo" << endl;
    // }
    // else if (b > 0)
    // {
    //     cout << "b es positivo" << endl;
    // }
    // else
    // {
    //     cout << "c es positivo" << endl;
    // }

    // if(a > 0)
    // {

    // }

    // if(b > 0)
    // {

    // }

    // if(c > 0)
    // {

    // }

    /* A sea mayor a 500 lanzar mensaje, A es mayor 200 mensaje, A no es ninguno */

    if(a > 500)
    {
        cout << "El numero es mayor a 500" << endl;
    }
    else if(a > 200)
    {
        cout << "El numero es mayor a 200" << endl;
    }
    else
    {
        cout << "No es mayor a ninguno" << endl;
    }


    cout << "Fin de programa" << endl;

    system("pause > nul");
    return 0;
}