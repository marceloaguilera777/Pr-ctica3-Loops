#include <iostream>
#include <string>
using namespace std;

bool esPalindromo(const string& cadena) {
    int izquierda = 0;
    int derecha = cadena.length() - 1;
    while (izquierda < derecha) {
        while (izquierda < derecha && cadena[izquierda] == ' ') {
            izquierda++;
        }
        while (izquierda < derecha && cadena[derecha] == ' ') {
            derecha--;
        }
        if (tolower(cadena[izquierda]) != tolower(cadena[derecha])) {
            return false;
        }
        izquierda++;
        derecha--;
    }
    return true;
}
int main() {
    string entrada;
    cout << "Ingrese una cadena: ";
    getline(cin, entrada);
    if (esPalindromo(entrada)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
