#include <iostream>
using namespace std;

int main()
{
    int n_uno;
    int n_dos;
    int total;
    cout << "*************************** OPERACIONES MIXTAS ***************************" << endl;
    cout << "--------------------------------------" << endl;
    cout << "          ingrese un numero" << endl;
    cout << "--------------------------------------" << endl;
    cin >> n_uno;
    cout << "--------------------------------------" << endl;
    cout << "      ingrese un segundo numero" << endl;
    cout << "--------------------------------------" << endl;
    cin >> n_dos;

    total = ((n_uno - n_dos) + 40);

    if (total < 0) {
        cout << "el resultado es: " << total << ", y es negativo";
    }
    else if (total > 0) {
        cout << "el resultado es: " << total << ", y es positivo";
    }
    else {
        cout << "el resultado es: " << total;
    }
    return 0;
}
