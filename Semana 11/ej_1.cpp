#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int nro, contMultiplos;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un número: ";
        cin >> nro;

        // Averigua cantidad de múltiplos del número ingresado
        contMultiplos = 0;

        for (int j = 1; j <= nro; j++)
        {
            if(nro%j==0)
            {
                contMultiplos++;
            }
        }

        if(contMultiplos == 2)
        {
            cout << "El número ingresado es primo" << endl;
        }
        else
        {
            cout << "El número ingresado no es primo" << endl;
        }

        cout << "-----------------" << endl;
    }

    return 0;
}









































