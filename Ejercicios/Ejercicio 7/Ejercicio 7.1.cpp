#include <iostream>
using namespace std;

void Callback() {
    cout << "La funcion callback ha sido llamada." << endl;
}

void ejecutar(void (*funcion)()) {
    cout << "Ejecutando la funcion" << endl;
    funcion();
}

int main() {
    ejecutar(Callback);

    return 0;
}