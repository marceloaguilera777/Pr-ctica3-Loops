#include <iostream>
#include <string>
using namespace std;

int encontrarSegundaF(const string& cadena) {
    int primeraPos = -1;
    int segundaPos = -1;
    int contador = 0;
    for (int i = 0; i < cadena.length(); i++) {
        if (cadena[i] == 'f' || cadena[i] == 'F') { 
            contador++;
            if (contador == 1) {
                primeraPos = i;
            } else if (contador == 2) {
                segundaPos = i;
                break; 
            }
        }
    }

    if (contador == 0) {
        return -2; 
    } else if (contador == 1) {
        return -1; 
    } else {
        return segundaPos; 
    }
}
int main() {
    string entrada;
    cout << "Ingrese una cadena: ";
    getline(cin, entrada);
    int resultado = encontrarSegundaF(entrada);
    if (resultado == -2) {
        cout << -2 << endl;
    } else if (resultado == -1) {
        cout << -1 << endl;
    } else {
        cout << resultado << endl;
    }
    return 0;
}
