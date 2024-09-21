#include <iostream>
using namespace std;

int main() {
int numero;

cout << "Ingrese un numero del 1 al 4: ";
cin >> numero;

switch(numero) {
case 1:
cout << "Primavera" << endl;
break;
case 2:
cout << "Verano" << endl;
break;
case 3:
cout << "Otonio" << endl;
break;
case 4:
cout <<"Invierno" << endl;
break;
default:
cout <<"Numero invalido"<<endl;
}

return 0;
}
