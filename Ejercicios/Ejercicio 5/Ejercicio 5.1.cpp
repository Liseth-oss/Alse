#include <iostream>
using namespace std;

int main() {
    int numero = 10; 
    int* pto = &numero; 

    cout << "Valor inicial de numero: " << numero << endl;

    *pto = 25;

    cout << "Valor del numero despues de modificarlo con el puntero: " << numero << endl;

    return 0;
}