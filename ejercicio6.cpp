#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Ingrese un número entero no negativo: " << endl;
    cin >> num;
    int sum = 0;
    while (num > 0) {
        sum = sum + num%10;
        num = num/10;
    }
    cout << "La suma es: " << sum << endl;
    
    return 0;
}
