/*
	Alguien quiere acceder a un club nocturno para lo
	cual necesita tener 18 años y una credencial
*/

#include <iostream>
using namespace std;

int main()
{

    int edad;
    char opcion;

    cout << "Ingrese la edad: ";
    cin >> edad;

    cout << "¿Tiene credencial? (S-N)";
    cin >> opcion;

    if((edad >= 18) && ((opcion == 'S') || (opcion == 's')))
    {
        cout << "Usted puede ingresar" << endl;
    }
    else{
        cout << "Usted no puede ingresar" << endl;
    }

    return 0;
}
