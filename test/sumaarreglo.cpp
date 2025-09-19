#include <iostream>
using namespace std;

int enteros [5]= {1,2,3,4,5};
int suma=0; 
int main()
{
   for (int i=0; i<5; i=i+1)
   {
      suma=suma+enteros[i];
   }
   cout << "La suma del arreglo es: " << suma << endl;
   return 0;
}