#include <iostream>
#include <iomanip>
using namespace std;
int main() {
   double U = 1.0;
   cout << "U0 = 1" << endl;
   
   for (int n=1; n<=10; ++n) {
       U = U / n;
       cout << "U" << n << " = " << scientific << setprecision(6) << U << endl;
   }
    
    return 0;
}
