#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	printf("Programa para calcular numeros pares!");
	int x,y;
	cout << "\nEscriba 1 numero par:"; cin >> x;
	cout << "\nEsrciba el otro numero par:"; cin >> y;
	if (x%2==0 and y%2==0)
	{
		printf("Felicidades, digitaste 2 numeros pares!");
	}
	else if (x%2==0 and y%2!=0)
	{
		printf("El primer numero es par y el segundo impar!");
	}
	else if (x%2!=0 and y%2==0)
	{
		printf("El primer numero es impar y el segundo par!");
	}
	else if (x%2!=0 and y%2!=0)
	{
		printf("Ambos numeros son impares!");
	}
	printf("\nFIN DEL PROGRANA, GRACIAS");
	return 0;
}