#include <iostream>
using namespace std;

int main() {
    const int NUM_CONDUCTORES = 10;
    float distancias[NUM_CONDUCTORES];
    float total = 0;
    float maxDistancia = 0;
    int conductorMax = 0;

    for (int i = 0; i < NUM_CONDUCTORES; i++) {
        cout << "Ingrese la distancia recorrida por el conductor " << (i + 1) << ": ";
        cin >> distancias[i];

        total += distancias[i];

        if (distancias[i] > maxDistancia) {
            maxDistancia = distancias[i];
            conductorMax = i;
        }
    }

    float promedio = total / NUM_CONDUCTORES;

    cout << "\nResultados" << endl;
    cout << "Distancia total recorrida por todos los conductores: " << total << endl;
    cout << "Distancia promedio: " << promedio << endl;
    cout << "El conductor " << (conductorMax + 1) << " recorrio la mayor distancia: " << maxDistancia << endl;

    return 0;
}