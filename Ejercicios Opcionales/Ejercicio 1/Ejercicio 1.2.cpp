#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, r, Anual, Mensual;
    int t;

    cout << "Ingrese el monto del prestamo: ";
    cin >> P;

    cout << "Ingrese la tasa de interes anual en decimal (ej: 0.05 para 5%): ";
    cin >> r;

    cout << "Ingrese el numero de años del prestamo: ";
    cin >> t;

    Anual = P * pow(1 + (r / 1), 1 * t);

    Mensual = P * pow(1 + (r / 12), 12 * t);

    Anual = ((int)(Anual * 100 + 0.5)) / 100.0;
    Mensual = ((int)(Mensual * 100 + 0.5)) / 100.0;

    cout << "Monto final con interes compuesto ANUAL: $" << Anual << endl;
    cout << "Monto final con interes compuesto MENSUAL: $" << Mensual << endl;

    if (Mensual > Anual) {
        cout << "El interes compuesto mensual resulta en un monto mayor." << endl;
    } else if (Anual > Mensual) {
        cout << "El interes compuesto anual resulta en un monto mayor." << endl;
    } else {
        cout << "Ambos metodos resultan en el mismo monto." << endl;
    }

    return 0;
}