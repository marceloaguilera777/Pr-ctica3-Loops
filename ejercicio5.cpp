#include <iostream>
using namespace std;
int main() {
    int primer_dia, dia_mes;
    
    cout << "Ingrese el primer día de la semana tomando en cuenta que (1-7, donde 1 es lunes): " << endl;
    cin >> primer_dia;
    
    cout << "Ingrese el número de días en el mes (1-99): " << endl;
    cin >> dia_mes;
    
    if (primer_dia < 1 || primer_dia > 7) {
        cout << "El día que ingresó no es válido" << endl;
        return 1;
    }
    if (dia_mes < 1 || dia_mes > 99) {
        cout << "El número de días ingresado no es válido" << endl;
        return 1;
    }   
        cout << endl << "L  M  X  J  V  S  D" << endl;
        cout << "---------------------" << endl;
        
        for (int i = 1; i < primer_dia; ++i) {
            cout << "   ";
        }
        for (int dia = 1; dia <= dia_mes; ++dia) {
            if (dia < 10) {
                cout << " ";
            }
            cout << dia << " ";
            if ((primer_dia - 1 + dia) % 7 == 0) {
                cout << endl;
            }
        }
    return 0;
}
