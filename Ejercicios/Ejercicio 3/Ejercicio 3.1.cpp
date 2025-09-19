#include <iostream>
using namespace std;

void Variable() {
    int x = 10; 
    cout << "Dentro de la funcion, x = " << x << endl;
}

int main() {
    Variable();

    // Intentar acceder a 'x' aquí daría error, porque solo existe dentro de Variable()
    // cout << x << endl;  // Error: 'x' no está declarado en este ámbito

    cout << "Fuera de la funcion no se puede acceder a x." << endl;

    return 0;
}