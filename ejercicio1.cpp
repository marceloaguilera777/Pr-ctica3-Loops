#include <iostream>
#include <string>
using namespace std;
int main() {
    string texto;
    cout << "Ingrese una cadena de texto: " << endl;
    getline(cin, texto);
    
    for (int i=0; i < texto.length(); i++) {
        if (texto[i] == ' ') {
            cout << i << endl;
        }
    }
    cout << texto.length() << endl;



    return 0;
}
