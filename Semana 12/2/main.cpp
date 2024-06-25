#include <iostream>
using namespace std;

int multplicar(int, int &);
void pedirIngreso(int &);

int main()
{
    system("cls");

    int nro, resultado, multiplicador;
    // cout << "La direccion de memoria de nro es " << &nro << endl;

    pedirIngreso(nro);
    resultado = multplicar(nro, multiplicador);

    cout << nro << " x " << multiplicador << " = " << resultado << endl;

    system("pause > nul");

    return 0;
}

/**
 * @brief Funcion que multiplica por dos
 *
 * @param n Ingreso de entero
 */
int multplicar(int n, int & m)
{
    // cout << "La direccion de memoria de nro es " << &n << endl;
    int r;
    m = 4;
    r = n * m;
    return r;
}

void pedirIngreso(int &n)
{
    cout << "ingrese un n£mero: ";
    cin >> n;
}