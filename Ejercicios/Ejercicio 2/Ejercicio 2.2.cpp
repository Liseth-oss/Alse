#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if ((numero % 2 == 0) && (numero > 0)) {
        cout << "El numero es par y positivo." << endl;
    } else if ((numero % 2 != 0) || (numero <= 0)) {
        cout << "El numero no cumple las condiciones (par y positivo)." << endl;
    }

    if (!(numero < 0)) {
        cout << "El numero no es negativo." << endl;
    } else {
        cout << "El numero es negativo." << endl;
    }

    return 0;
}