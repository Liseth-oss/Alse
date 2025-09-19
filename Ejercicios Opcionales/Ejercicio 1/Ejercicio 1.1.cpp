#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double precio1, precio2, precio3;
    int cant1, cant2, cant3;

    cout << "Ingrese el precio del producto 1: ";
    cin >> precio1;
    cout << "Ingrese la cantidad del producto 1: ";
    cin >> cant1;

    cout << "Ingrese el precio del producto 2: ";
    cin >> precio2;
    cout << "Ingrese la cantidad del producto 2: ";
    cin >> cant2;

    cout << "Ingrese el precio del producto 3: ";
    cin >> precio3;
    cout << "Ingrese la cantidad del producto 3: ";
    cin >> cant3;

    double subtotal = (precio1 * cant1) + (precio2 * cant2) + (precio3 * cant3);

    double impuesto = subtotal * 0.08;

    double total = subtotal + impuesto;

    if (total > 100) {
        double descuento = total * 0.10;
        total = total - descuento;
        cout << "Se aplico un descuento del 10%." << endl;
    }

    cout << fixed << setprecision(2);
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Impuesto (8%): $" << impuesto << endl;
    cout << "Costo total: $" << total << endl;

    return 0;
}
