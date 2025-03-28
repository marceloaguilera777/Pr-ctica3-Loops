#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int numero, original, inverso = 0;
    
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    original = numero; 
    
    while(numero > 0) {
        int digito = numero % 10; 
        inverso = inverso * 10 + digito;
        numero /= 10; 
    }
    
    if(original == inverso) {
        cout << original << " ES palindromo" << endl;
    } else {
        cout << original << " NO es palindromo" << endl;
    }

    return 0;
}
