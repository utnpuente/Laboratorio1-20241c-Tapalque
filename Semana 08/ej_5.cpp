/*

    Hacer un programa para ingresar los consumos de electricidad de los clientes
    de una empresa. Cada registro contiene los siguientes datos:

    - N�mero de cliente
    - Localidad del cliente (1, 2 o 3)
    - Kilovatios consumidos

    El lote finaliza con un registro con n�mero de cliente igual a cero.

    El precio es escalonado seg�n la siguiente escala:

    $ 10 por kilovatio por los primeros 100 kilovatios de consumo.
    $ 12 por kilovatio por el consumo de 101 a 200 kilovatios.
    $ 15 por kilovatio por el consumo de 201 kilovatios en adelante.

    Adem�s hay un cargo fijo de $ 100.

    Ejemplo A: Consumo de 55 kilovatios, se calcular�: $ 10 x 55 + $ 100= $ 650
    Ejemplo B: Consumo de 125 kilovatios, se calcular�: $ 10 x 100 + $ 12 x 25 + $
    100=$ 1400
    Ejemplo C: Consumo de 250 kilovatios, se calcular�: $10 x 100+ $12 x 100 +
    $15 x 50 + $100= $ 3050
    Ejemplo D: Consumo de 0 kilovatios, se calcular�: $ 10 x 0 + $ 100= $ 100

    Se pide determinar e informar:

    a) El n�mero de cliente que tuvo la mayor cantidad de Kilovatios consumidos
    para cada una de las 3 localidades. Se listan 3 resultados, uno para cada una de
    las 3 localidades

    b) El total de recaudaci�n para cada una de las 3 localidades. Se listan 3
    resultados, uno para cada una de las 3 localidades

    c) El n�mero de cliente que tuvo la menor cantidad de Kilovatios consumidos
    excluyendo a los clientes que tuvieron Kilovatios consumidos con valor cero. Se
    lista 1 resultado.
*/

// Estructura
// A
// B
// C
// Unimos todo

#include <iostream>
using namespace std;

int main()
{
    int nroCliente, locCliente;
    float kiloCliente;


    // Inicializacion
    cout << "Ingrese n�mero de cliente: ";
    cin >> nroCliente;
    cout << "Ingrese Localidad: ";
    cin >> locCliente;
    cout << "Ingrese Kilovatios consumidos: ";
    cin >> kiloCliente;

    while(nroCliente != 0) // Condicion
    {

        // Codigo
//        cout << "El numero de cliente a analizar es el " << nroCliente;
//        cout << " con kilovatios " << kiloCliente << " y n�mero de Localidad " << locCliente << endl;

        // A


        // B

        // C


        //Modificacion
        cout << "Ingrese n�mero de cliente: ";
        cin >> nroCliente;
        cout << "Ingrese Localidad: ";
        cin >> locCliente;
        cout << "Ingrese Kilovatios consumidos: ";
        cin >> kiloCliente;
    }

    cout << "Resultados " << endl;

    return 0;
}




