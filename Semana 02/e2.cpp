/*
    Ingresar por teclado el numero de articulo, precio unitario y cantidad.
    Emitir por pantalla el resultado de compra.
    Además nos ingresan el valor que pagan y queremos saber el vuelto;
*/

#include <iostream>
using namespace std;

int main()
{
    int nroArt, cantidad, abona;
    float precioUnitario, resultado, vuelto;

    cout << "Ingrese el numero articulo: ";
    cin >> nroArt;

    cout << "Ingrese el precio unitario: $";
    cin >> precioUnitario;

    cout << "Ingrese la cantidad: ";
    cin >> cantidad;

    cout << "valor del billete: $";
    cin >> abona;

    //a cobrar
    resultado = cantidad * precioUnitario;

    //vuelto
    vuelto = abona - resultado;

    cout << "El valor a pagar es: $";
    cout << resultado << endl;

    cout << "El vuelto es: $";
    cout << vuelto;


}
