#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int nro, contMultiplos;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un n�mero: ";
        cin >> nro;

        // Averigua cantidad de m�ltiplos del n�mero ingresado
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
            cout << "El n�mero ingresado es primo" << endl;
        }
        else
        {
            cout << "El n�mero ingresado no es primo" << endl;
        }

        cout << "-----------------" << endl;
    }

    return 0;
}









































