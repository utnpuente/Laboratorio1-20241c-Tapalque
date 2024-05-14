#include <iostream>
using namespace std;

int main() {
   system("cls");

    for(int i = 10; i > 0; i--)
    {
        cout << i << endl;
    }

    for(int i = 100; i < 120; i+=2)
    {
        cout << i << endl;
    }

    for(int i = 10; i > 0; i--)
    {
        cout << i << endl;
    }

    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    for(int i = 0; i < num ;i++)
    {
        cout << i << endl;
    }

    cout << "Fin del programa " << endl;

   system("pause > nul");
    return 0;
}