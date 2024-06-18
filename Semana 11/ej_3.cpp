#include <iostream>
using namespace std;

/*
    Se dispone de una lista de 10 grupos de n�meros enteros separados entre ellos
    por ceros. Se pide determinar e informar:
    a) El n�mero de grupo con mayor porcentaje de n�meros impares positivos
    respecto al total de n�meros que forman el grupo. Se informa 1 resultado al
    final.
    b) Para cada grupo el �ltimo n�mero primo y en qu� orden apareci� en ese
    grupo, si en un grupo no hubiera n�meros primos informar con un cartel
    aclaratorio. Se informan 2 resultados por cada grupo.
    c) Informar cuantos grupos est�n formados por todos n�meros ordenados de
    mayor a menor. Se informa 1 resultado al final.

*/

/*
    Una librer�a registra el ingreso mensual de los 5 distribuidores con los que trabaja.
    De cada distribuidor registra su nombre y de cada libro que le env�an registra:
    -N�mero ISBN
    -T�tulo
    -Costo
    -Genero (F, B, E, C, R) Ficcion, biografia, Educaci�n, Ciencia, Religioso

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

        cout << "Ingrese un n�mero: ";
        cin >> nro;


        while (nro != 0) // Maneja ingresos
        {
            contPorGrupoTotal++;

            if(nro > 0 && nro % 2 != 0) // Averigua n�meros positivos e impares
            {
                contNroPosImp++;
            }

            cout << endl;
            cout << "Ingrese un n�mero: ";
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
        cout << "el porcentaje mayor de n�meros positivos e impares fue del grupo: " << nroGrupoMaxPorcNroPosImp << endl;
    else
        cout << "No hubieron n�meros positivos e impares" << endl;

    return 0;
}






