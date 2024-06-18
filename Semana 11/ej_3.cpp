#include <iostream>
using namespace std;

/*
    Se dispone de una lista de 10 grupos de números enteros separados entre ellos
    por ceros. Se pide determinar e informar:
    a) El número de grupo con mayor porcentaje de números impares positivos
    respecto al total de números que forman el grupo. Se informa 1 resultado al
    final.
    b) Para cada grupo el último número primo y en qué orden apareció en ese
    grupo, si en un grupo no hubiera números primos informar con un cartel
    aclaratorio. Se informan 2 resultados por cada grupo.
    c) Informar cuantos grupos están formados por todos números ordenados de
    mayor a menor. Se informa 1 resultado al final.

*/

/*
    Una librería registra el ingreso mensual de los 5 distribuidores con los que trabaja.
    De cada distribuidor registra su nombre y de cada libro que le envían registra:
    -Número ISBN
    -Título
    -Costo
    -Genero (F, B, E, C, R) Ficcion, biografia, Educación, Ciencia, Religioso

    El ingreso de libro corta con un ingreso de ISBN igual a 0
*/

int main()
{
    setlocale(LC_ALL, "spanish");

    int nro;
    int contNroPosImp;
    int contPorGrupoTotal;
    float porcNroPosImpPorGrupo;
    float maxPorcNroPosImp = 0;
    int nroGrupoMaxPorcNroPosImp = 0;

    for (int i = 0; i < 10; i++) // Maneja grupos
    {
        contNroPosImp = 0;
        contPorGrupoTotal = 0;

        cout << "------------------------" << endl;
        cout << "GRUPO " << i + 1 << endl;
        cout << "------------------------" << endl;

        cout << "Ingrese un número: ";
        cin >> nro;


        while (nro != 0) // Maneja ingresos
        {
            contPorGrupoTotal++;

            if(nro > 0 && nro % 2 != 0) // Averigua números positivos e impares
            {
                contNroPosImp++;
            }

            cout << endl;
            cout << "Ingrese un número: ";
            cin >> nro;
        }

        if(contPorGrupoTotal > 0)
        {
            porcNroPosImpPorGrupo = (float)contNroPosImp * 100 / contPorGrupoTotal;

            cout << "Porcentaje : " << porcNroPosImpPorGrupo << endl;

            if(i==0 || porcNroPosImpPorGrupo > maxPorcNroPosImp)
            {
                maxPorcNroPosImp = porcNroPosImpPorGrupo;
                nroGrupoMaxPorcNroPosImp = i + 1;
            }
        }

    }

    cout << "----------------------------" << endl;
    if(nroGrupoMaxPorcNroPosImp != 0)
        cout << "el porcentaje mayor de números positivos e impares fue del grupo: " << nroGrupoMaxPorcNroPosImp << endl;
    else
        cout << "No hubieron números positivos e impares" << endl;

    return 0;
}






