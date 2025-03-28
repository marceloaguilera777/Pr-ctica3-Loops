#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int N, k ;
    cout << "Ingrese el valor del número límite: " << endl;
    cin >> N;
    cout << "Ingrese el valor del exponente: " << endl;
    cin >> k;
    
    if (N <= 0) {
        cout << "Su número debe ser positivo" << endl;
        return 1;
    }
    long long R = 0;
    for (int i = 1; i <= N; ++i) {
         R += pow(i, k);
    }
    cout << "La suma de 1**" << k << " + 2**" << k << " + ... + " << N << "**" << k << " es: " << R << endl;

    return 0;
}
