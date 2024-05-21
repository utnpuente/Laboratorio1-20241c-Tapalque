#include <iostream>
using namespace std;

/*
    12. Dada una lista de 7 n£meros informar cual es el primer y segundo n£mero impar ingresado.
    Ejemplo 8, 4, 5, 6, -9, 5,7 se informa 5 y -9.
*/

// Lista de 7 n£meros
// Informar el primer impar
// informar el segundo impar

int main() {
   system("cls");

    int nro;
    int contImpar = 0;
    int primerImpar, segundoImpar;

    for(int i = 0; i < 7; i++) // Lista 7 n£meros
    {
        cout << "Ingrese un n£mero: ";
        cin >> nro;

        if(nro % 2 != 0) // Averigua impares
        {
            contImpar++;

            if(contImpar == 1) //Averiguar primer impar
            {
                primerImpar = nro;
            } 
            else if(contImpar == 2) //Averiguar segundo impar
            {
                segundoImpar = nro;
            }

        }
    }

    cout << "El primer impar fue " << primerImpar << endl;
    cout << "El segundo impar fue " << segundoImpar << endl;
    

   system("pause > nul");
    return 0;
}