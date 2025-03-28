#include <iostream>
using namespace std;
int main() {
    int inicio, fin;
    
    cout << "Ingrese el valor inicial: ";
    cin >> inicio;
    cout << "Ingrese el valor final: ";
    cin >> fin;

    if (inicio <= 0) {
        cout << "El numero debe de ser positivo y mayor a cero" << endl;
        return 0;
    }
    if (fin < inicio) {
        cout << "El numero de fin no debe de ser menor al inicial" << endl;
        return 0;
    }

    for (int i = inicio; i <= fin; i++) {
        int n = i;
        int contador = 0;

        while (n > 0) {
            if (n % 3 == 0) {
                n += 4;
            } else if (n % 3 != 0 && n % 4 == 0) {
                n /= 2;
            } else {
                n -= 1;
            }
            contador++;
        }

        cout << i << " --> " << contador << endl;
    }

    return 0;
}
