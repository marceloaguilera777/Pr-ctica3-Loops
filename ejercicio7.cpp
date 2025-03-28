#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int n;
    cout << "Ingrese el numero de terminos (n): ";
    cin >> n;

    double suma = 0.0;
    for (int i = 1; i <= n; ++i) {

        double termino = (i % 2 == 1) ? 1.0 : -1.0;
        termino /= i;
        suma += termino;
    }
    cout.precision(10); 
    cout << "La aproximacion de ln(2) con " << n << " terminos es: " << suma << endl;
    cout << "Valor real de ln(2): " << log(2) << endl; 

    return 0;
}
