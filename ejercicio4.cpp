#include <iostream>
using namespace std;
int main() {
   
   int num;
   cout << "Ingrese un número entero: " << endl;
   cin >> num;
   
   if (num < 0) {
           cout << "El nùmero es negativo. Intentelo de nuevo" << endl;
           return 1;
       }
       
   if (num > 14) {
       cout << "El nùmero es muy grande. Intentelo de nuevo" << endl;
       return 1;
   }
   
   long long factorial = 1;
   for (int i=1; i <= num; i++) {
           factorial = factorial * i;

   }   cout << "El factorial del número es: " << factorial << endl;
  
  
    return 0;
}
