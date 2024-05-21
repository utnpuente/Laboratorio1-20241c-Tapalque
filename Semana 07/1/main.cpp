#include <iostream>
using namespace std;

//BANDERAS

// Ingreser por teclado 3 n£meros e informar si hubo al menos un positivo

int main() {
   system("cls");

    int nro;
    int contPositivo = 0;
    bool huboNumeroPositivo = false;

    for (int i = 0; i < 3; i++)
    {
        cout << "Ingrese un n£mero: ";
        cin >> nro;

        if(nro > 0)
        {
            huboNumeroPositivo = true;
        }
    }

    if(huboNumeroPositivo == false)
    {
        cout << "No se ingresaron positivos" << endl;
    }
    else
    {
        cout << "Al menos se ingres¢ un positivo" << endl;
    }
    

   system("pause > nul");
    return 0;
}