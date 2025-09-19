#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    int* arreglo = new int[n];

    for (int i = 0; i < n; i++) {
        arreglo[i] = i + 1;
    }

    cout << "Elementos del arreglo: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    delete[] arreglo;

    return 0;
}