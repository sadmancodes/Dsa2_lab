#include <iostream>
using namespace std;

int fact (int n) {
    if (n == 0) 
       return 1;
       return n * fact (n-1);
}
 int power (int a, int b) {
    if (b == 0)
        return 1;
        return a * power (a, b-1);
 }
 int main() {
    cout << fact(4) << endl;
    cout << power (2,4) << endl;
 }