#include <iostream>
using namespace std;

int main()
{
    system("cls");

    const int PIN = 1234;
    int userPin;
    float saldo = 5800;

    cout << "Ingrese el PIN: ";
    cin >> userPin;

    if (userPin == PIN)
    {
        int importe, calculadorDeResto, bMil, bQuin, bDoscien, bCien;

        cout << "Ingrese el monto a retirar" << endl;
        cin >> importe;

        if (importe <= saldo)
        {
            bMil = importe / 1000;
            importe %= 1000;

            bQuin = importe / 500;
            importe %= 500;

            bDoscien = importe / 200;
            importe %= 200;

            bCien = importe / 100;

            cout << "Le entregaré " << endl;
            cout << bMil << " billetes de 1000" << endl;
            cout << bQuin << " billetes de 500" << endl;
            cout << bDoscien << " billetes de 200" << endl;
            cout << bCien << " billetes de 100" << endl;
        }
        else
        {
            cout << "El importe $" << importe << " supera el saldo de la cuenta  que es de $" << saldo << endl;
        }
    }
    else
    {
        cout << "El pin es incorrecto" << endl;
    }

    system("pause > nul");
    return 0;
}