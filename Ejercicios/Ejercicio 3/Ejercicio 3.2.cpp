#include <iostream>
using namespace std;

void contarLlamadas() {
    static int contador = 0;
    contador++;
    cout << "La funcion ha sido llamada " << contador << " veces." << endl;
}

int main() {
    contarLlamadas();
    contarLlamadas();
    contarLlamadas();
    contarLlamadas();

    return 0;
}