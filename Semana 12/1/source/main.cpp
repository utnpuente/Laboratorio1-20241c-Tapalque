#include <iostream>
using namespace std;

int sumar(int a, int b);

int main()
{
    system("cls");

    int nro, nro2, resultado;

    cout << "Ingrese un n£mero: ";
    cin >> nro;

    cout << "Ingrese otro n£mero: ";
    cin >> nro2;

    resultado = sumar(nro, nro2);

    cout << "Resultado es " << resultado << endl;

    system("pause > nul");
    return 0;
}

int sumar(int a, int b)
{
    int resultado;
    resultado = a + b;
    return resultado;
}


