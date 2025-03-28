#include <iostream>
#include <string>
using namespace std;
int main() {
    int valor;
    int visitas = 0;
    cout << "Ingrese las visitas al refrigerador tomando en cuenta esto: (1 = hay torta, 0 = no hay): " << endl;
    while (visitas < 10 && cin >> valor) {
        visitas ++;
        if (valor == 1) {
            cout << "Om-nom-nom :P" << endl;
        } else {
            cout << "No cake :(" << endl;
            break;
        }
    }
    return 0;
}
