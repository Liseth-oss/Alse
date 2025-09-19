#include <iostream>
using namespace std;
float pi=3.1416;

// Function prototype for f_1
void f_1()
{
   float r, area;
   printf("Programa para calcular el area de un circulo\n");
   cout << "Digite el radio: ";cin >> r;
   area = pi * r * r;
   cout << "El area del circulo es: " << area << endl;
}

int main()
{
   int x,y;
   cout << "Programa para mostrar su edad y peso." << endl;
   cout << "Digite su edad: "; cin >> x;
   cout << "Digite su peso: "; cin >> y;
   cout << "Su edad es: " << x << endl;
   cout << "Su peso es: " << y << endl;
   if (y >= 100)
      cout << "Usted tiene sobrepeso, gordo puto." << endl;
   else
      cout << "Usted es una persona normal :)." << endl;
   f_1();
   return 0;
}

