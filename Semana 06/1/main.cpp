#include <iostream>
using namespace std;

int main()
{
    system("cls");

    char tipoLenguaje;

    cout << "Ingrese el tipo de lenguaje: ";
    cin >> tipoLenguaje;

    switch (tipoLenguaje)
    {
    case 'c':
    case 'C':
        cout << "Lenguaje C/C++" << endl;
        break;
    case '#':
        cout << "Lenguaje C#" << endl;
        break;
    case 'p':
    case 'P':
        cout << "Lenguaje Python" << endl;
        break;
    case 'g':
    case 'G':
        cout << "Lenguaje Go" << endl;
        break;
    default:
        cout << "La opci¢n elegida es incorrecta" << endl;
    }

    system("pause > nul");
    return 0;
}