#include <iostream>
using namespace std;

int main() {
    int arreglo[10] = {3, 7, 12, 19, 21, 25, 30, 42, 55, 60};

    int numero;
    bool encontrado = false;

    cout << "Ingrese un numero a buscar: ";
    cin >> numero;

    for (int i = 0; i < 10; i++) {
        if (arreglo[i] == numero) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "El numero " << numero << " SI esta en el arreglo." << endl;
    } else {
        cout << "El numero " << numero << " NO esta en el arreglo." << endl;
    }

    return 0;
}