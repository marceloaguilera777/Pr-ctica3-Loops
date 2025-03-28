#include <iostream>
using namespace std;
bool esPrimo(int numero) {
    if (numero <= 1) return false;
    if (numero == 2) return true;
    if (numero % 2 == 0) return false;
    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cout << "Ingrese la cantidad de numeros primos a mostrar: ";
    cin >> n;
    int contador = 0;
    int numero = 2; 
    cout << "Los primeros " << n << " numeros primos son: ";
    while (contador < n) {
        if (esPrimo(numero)) {
            cout << numero << " ";
            contador++;
        }
        numero++;
    }
    cout << endl;
    return 0;
}
