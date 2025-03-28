#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int a, b;
  int cociente = 0;
  cout << "Ingrese el dividendo: " << endl;
  cin >> a;
  cout << "Ingrese el divisor: " << endl;
  cin >> b;
  if (b != 0) {
      
    while (a>=b) {
        a = a - b;
        cociente++;
    } cout << "El residuo es: " << a << endl;
    cout << "El cociente es: " << cociente << endl;
  } else {
      cout << "No se puede dividir por 0" << endl;
  }
    
    return 0;
}
