#include <iostream>
using namespace std;

int producto(int a, int b) {
    return a * b;
}

int main() {
    int x, y;

    cout << "Ingrese el primer numero: ";
    cin >> x;
    cout << "Ingrese el segundo numero: ";
    cin >> y;

    int resultado = producto(x, y);

    cout << "El producto de " << x << " e " << y << " es: " << resultado << endl;

    return 0;
}