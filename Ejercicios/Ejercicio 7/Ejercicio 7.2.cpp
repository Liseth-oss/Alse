#include <iostream>
using namespace std;

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "No se puede dividir entre cero." << endl;
        return 0; 
    }
}

void Operacion(int x, int y, int (*tipo)(int, int)) {
    cout << "Resultado: " << tipo(x, y) << endl;
}

int main() {
    int a, b, opcion;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "Seleccione la operacion: ";
    cin >> opcion;

    switch(opcion) {
        case 1: Operacion(a, b, suma); break;
        case 2: Operacion(a, b, resta); break;
        case 3: Operacion(a, b, multiplicacion); break;
        case 4: Operacion(a, b, division); break;
        default: cout << "Opcion invalida." << endl;
    }

    return 0;
}