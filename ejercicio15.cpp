#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;

    if (num == 0) {
        cout << "0 en binario es: 0" << endl;
        return 0;
    }

    int binario[32]; 
    int i = 0;

    while (num > 0) {
        binario[i] = num % 2; 
        num = num / 2;
        i++;
    }

    cout << "El número en binario es: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binario[j];
    }
    cout << endl;
    
    return 0;
}
