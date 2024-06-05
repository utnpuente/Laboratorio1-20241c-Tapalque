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
    int j = 0; // Inicialización

    while(j < 10) // Condición
    {

        cout << j << endl;

        //j++; //Modificación
        cout << "Ingresa un número: ";
        cin >> j;
    }


    return 0;
}
