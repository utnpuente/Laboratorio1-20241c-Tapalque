#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int nro, contMultiplos;

    // Contador primos hay en total

    for(int j = 0; j < 5; j++) // Recorrer grupos
    {
        //contador de primos de grupo

        for (int i = 0; i < 10; i++) // recorrer ingresos
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

            //Averigua cu�ntos primos hay
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

        // resultado de primos del grupo
    }

    // Resultado de cu�ntos primos hay en total

    return 0;
}





// Unidad 4

//( (1,2,3),(4,5,6),(7,8,9),(1,2,3),(1,2,3),(1,2,3)(1,2,3) )
// Un resultado particular: �Es primo? �Es perfecto?
// Resultados sub totales: �cu�ntos primos hay? �Acumular resultados elevados ala cuadrado?
// Resultados totales: �cu�ntos primos hay? �Acumular resultados elevados ala cuadrado?

// Unidad 3

// 1,2,3,4,5,6,7,8,9

// Un resultado particular: �Es primo? �Es perfecto?
// Resultados generales: �cu�ntos primos hay? �Acumular resultados elevados ala cuadrado?






































