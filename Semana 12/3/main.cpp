#include <iostream>
using namespace std;

int cambuiarNumeros(int a, int &b)
{
    a = 20;
    b = 30;
}

int main() {
   system("cls");

    int nro = 15;
    int nro2 = 18;
    int &nro3 = nro;
    nro3 = 10;

    cout << "Nro tiene " << nro << endl; // 15
    cout << "Nro2 tiene " << nro2 << endl; // 18

    cambuiarNumeros(nro, nro2);

    cout << "Nro tiene " << nro << endl; // 15
    cout << "Nro2 tiene " << nro2 << endl; // 30


   system("pause > nul");
    return 0;
}