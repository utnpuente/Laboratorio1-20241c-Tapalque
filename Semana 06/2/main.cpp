#include <iostream>
using namespace std;

int main()
{
    system("cls");

    //Ejecuta una sola vez
    int num, pos;
    pos = 0;

    //Ejecuta x veces
    for(int i = 0; i < 5; i++)
    {

        cout << "Ingrese un n£mero: ";
        cin >> num;

        if(num > 0)
        {
            cout << "Es positivo" << endl;
            pos++;
        }      

    }

    // Ejecuta una sola vez
    cout << "La cantidad de positivos es: " << pos << endl;


    system("pause > nul");
    return 0;
}