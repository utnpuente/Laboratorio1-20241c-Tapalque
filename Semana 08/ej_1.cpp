#include <iostream>
using namespace std;

int main()
{

    //FOR
    for(int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    cout << " ----------------------- " << endl;

    //WHILE
    int j = 0; // Inicializaci�n

    while(j < 10) // Condici�n
    {

        cout << j << endl;

        //j++; //Modificaci�n
        cout << "Ingresa un n�mero: ";
        cin >> j;
    }


    return 0;
}
