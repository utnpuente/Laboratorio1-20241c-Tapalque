/*
    Hacer un programa para ingresar cinco números y listar cuantos de esos cinco
    números son positivos, cuantos son negativos y cuantos son iguales a 0
*/

#include <iostream>
using namespace std;

int main()
{

    /*contadores*/

    int a, b, c, d, e;
    cout << "Ingrese cinco números: ";
    cin >> a >> b >> c >> d >> e;
    int contPos = 0, contNeg = 0, contCero = 0;

    if(a > 0)
    {
        contPos++;
    }
    else if( a < 0)
    {
        contNeg++;
    }
    else
    {
        contCero++;
    }

    if(b > 0)
    {
        contPos++;
    }
    else if( b < 0)
    {
        contNeg++;
    }
    else
    {
        contCero++;
    }

    if(c > 0)
    {
        contPos++;
    }
    else if( c < 0)
    {
        contNeg++;
    }
    else
    {
        contCero++;
    }

    if(d > 0)
    {
        contPos++;
    }
    else if( d < 0)
    {
        contNeg++;
    }
    else
    {
        contCero++;
    }

    if(e > 0)
    {
        contPos++;
    }
    else if( e < 0)
    {
        contNeg++;
    }
    else
    {
        contCero++;
    }

    cout << "Los positivos son: " << contPos << endl;
    cout << "Los negativos son: " << contNeg << endl;
    cout << "Los ceros son: " << contCero << endl;


    return 0;
}
