#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b; 
    bool MCD = false;
    if (a > 0 && b > 0 && a != b) {
        if (a>b) {
         int aux = a;
         a = b;
         b = aux; 
        }
        int i = a;
        while (!MCD && i >= 1) {
            if (a % i == 0 && b % i == 0) {
                cout << "El mcd es: " << i << endl;
                MCD = true;
            }
            else {
                i--;
            }
        }
    }
    else {
        if (a == b) {
            cout << "Ingresó numeros iguales" << endl;
        }
        else {
            cout << "Ingresó números incorrectos" << endl;
        }
    }
    return 0;
}
