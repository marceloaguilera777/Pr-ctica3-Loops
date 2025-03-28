#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;

int main() {
    const int TERMINOS = 10;
    double U = 1.0; 
    double V = U;   
    cout << fixed << setprecision(6);
    cout << "n\tUₙ\t\tVₙ\t\tDiferencia con e\n";
    cout << "0\t" << U << "\t\t" << V << "\t\t" << exp(1) - V << endl;
    for (int n = 1; n <= TERMINOS; ++n) {
        U = U / n;         
        V += U;            
        cout << n << "\t" << U << "\t" << V << "\t" << exp(1) - V << endl;
    }

    cout << "\nValor real de e: " << exp(1) << endl;
    return 0;
}
