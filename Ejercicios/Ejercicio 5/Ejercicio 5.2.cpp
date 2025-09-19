#include <iostream>
using namespace std;

void intercambio(int* a, int* b) {
    int temp = *a; 
    *a = *b;      
    *b = temp;     
}

int main() {
    int x = 5, y = 10;

    cout << "Antes del intercambio:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    intercambio(&x, &y);

    cout << "Despues del intercambio:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}