#include <iostream>
using namespace std;
int main() {
int numero;
cout << "Ingrese un numero de la tabla de multiplicar que desea conocer: ";
cin >> numero;
cout << "Tabla de Multiplicar del " << numero << ":" << endl;
for (int i = 1; i <= 10; i++) {
cout << numero << " x " << i << " = " << numero * i << endl;
}
return 0;
}
