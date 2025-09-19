#include <iostream>
using namespace std;

int main() {
    int a = 12;
    int b = 4;

    cout << "Suma: " << (a + b) << endl;
    cout << "Resta: " << (a - b) << endl;
    cout << "Multiplicacion: " << (a * b) << endl;

    if (b != 0) {
        cout << "Division: " << (a / b) << endl;
    } else {
        cout << "No se puede dividir entre cero" << endl;
    }

    return 0;
}