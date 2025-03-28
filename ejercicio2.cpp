#include <iostream>
#include <string>
using namespace std;
int main() {
    string texto;
    string palabra_actual;
    cout << "Ingrese una cadena de texto: " << endl;
    getline(cin, texto);
    
    for (int i=0; i <= texto.length(); i++) {
        if (i == texto.length() || texto[i] == ' ') {
            if (!palabra_actual.empty()) {
            cout << '[' << palabra_actual << ']' << endl;
            palabra_actual.clear();
        }
    }
    else {
        palabra_actual += texto[i];
        }
    }
    
    return 0;
}
