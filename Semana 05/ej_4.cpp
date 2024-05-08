/*
    Hacer un programa para leer tres números diferentes y determinar e informar el
    número del medio.
    Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
*/

#include <iostream>
using namespace std;

int main()
{

    int num1, num2, num3;
    cout << "Ingrese tres números: ";
    cin >> num1 >> num2 >> num3;

    //3 2 1 --> 3! --> 3*2*1 --> 6
    // 3 numeros --- > 6 2 probabilidades para cada uno
    // num1 ---> num1 > num2 && num1 < num3 ---> num1 < num2 && num1 > num3
    // 5, 2, 8
    // 5, 8, 2

    if((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3))
    {
        cout << num1 << " es el del medio" << endl;
    }

    return 0;
}
