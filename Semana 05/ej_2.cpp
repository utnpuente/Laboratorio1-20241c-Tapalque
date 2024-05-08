#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    /*
        OR --- > ||
    */

    /*
        EL transporte público otorga un descuento
        del 70% a menores de 10 años y a jubilados
        mayores de 65 años
    */

    int edad;
    float descuento = 1;
    const float IMPORTE = 300;
    char opcion;
    bool esEstudiante;

    cout << "Ingrese la edad: ";
    cin >> edad;

    cout << "¿Es estudiante? (S-N)";
    cin >> opcion;

    esEstudiante = opcion == 'S' || opcion == 's';

    if(edad > 65 || edad < 10 || esEstudiante == true)
    {
        descuento = 0.30f;
    }


    float importeTotal = IMPORTE * descuento;

    cout << endl;
    cout << endl << "----------------------------" << endl;
    cout << " VALOR         : $" << IMPORTE << endl;
    cout << " DESCUENTO     : " << 100 -(descuento * 100) << "%";
    cout << endl << "----------------------------" << endl;
    cout << " TOTAL A PAGAR : $" << importeTotal << endl;

    return 0;
}
