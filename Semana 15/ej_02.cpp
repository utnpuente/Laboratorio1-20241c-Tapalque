/*
    11 Una empresa que fabrica 200 art�culos tiene la siguiente informaci�n para cada
    uno de las ventas del mes anterior:

    - C�digo de Art�culo (1 a 200)
    - D�a (1 a 31)
    - Cantidad vendida

    Puede haber m�s de un registro para el mismo art�culo. El lote finaliza con un
    registro con n�mero de art�culo igual a cero. Se pide determinar e informar:

    a) Informar para cada c�digo de art�culo la cantidad total de ventas en el mes.
    b) Informar los d�as en los que no hubo ventas.
    c) Informar los c�digos de los art�culos cuyas ventas en cantidad son mayores
    al promedio.
*/

#include <iostream>
using namespace std;

void mostrarCantPorArts(int v[], int t, int mt);
void mostrarDiasSinVentas(bool v[], int t, int mt);

int main()
{
    setlocale(LC_ALL, "spanish");

    const int TAM_ART = 200;
    const int MIN_ART = 1;

    const int TAM_DIA = 31;
    const int MIN_DIA = 1;

    int numArt;
    int dia;
    int cantVendidas;

    int vCantVentasPorArts[TAM_ART]{};
    bool vHuboVentas[TAM_DIA]{};

    cout << "Ingrese el n�mero del art�culo: ";
    cin >> numArt;


    while(numArt != 0)
    {

        cout << "Ingrese el d�a: ";
        cin >> dia;

        cout << "Ingrese la cantidad vendido: ";
        cin >> cantVendidas;

        // Punto A
        vCantVentasPorArts[numArt - MIN_ART]++;

        // Punto B
        if(!vHuboVentas[dia - MIN_DIA])
        {
            vHuboVentas[dia - MIN_DIA] = true;
        }

        cout << "--------------------------------" << endl;
        cout << "Ingrese el n�mero del art�culo: ";
        cin >> numArt;
    }

    // Punto A
    mostrarCantPorArts(vCantVentasPorArts, TAM_ART, MIN_ART);

    // Punto B
    mostrarDiasSinVentas(vHuboVentas, TAM_DIA, MIN_DIA);

    // Punto C
    // 1 - Promedio --> Funcion 1
    // 2 - Listar aquellos arts que superan el promedio --> Funcion 2

    return 0;
}


void mostrarCantPorArts(int v[], int t, int mt)
{
    for(int i = 0; i < t; i++)
    {
        cout << "El art�culo " << i + mt << " vendio un total de " << v[i] << endl;
    }
}

void mostrarDiasSinVentas(bool v[], int t, int mt)
{
    for(int i = 0; i < t; i++)
    {
        if(!v[i])
        {
            cout << "El d�a " << i + mt << " no hubo ventas" << endl;
        }
    }
}








