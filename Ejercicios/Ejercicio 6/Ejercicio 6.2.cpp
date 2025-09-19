#include <iostream>
using namespace std;

void division(int a, int b, int &cociente, int &residuo) {
    cociente = a / b;
    residuo = a % b;
}

int main() {
    int a, b, x, y;

    cout << "Ingrese el dividendo: ";
    cin >> a;
    cout << "Ingrese el divisor: ";
    cin >> b;

    if (b != 0) {
        division(a, b, x, y);
        cout << "Cociente: " << x << endl;
        cout << "Residuo: " << y << endl;
    } else {
        cout << "No se puede dividir entre cero." << endl;
    }

    return 0;
}