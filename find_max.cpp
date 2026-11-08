#include <iostream>
using namespace std;

int findMax( int a[], int n) {
    if (n==1)
        return a[0];
        int restMax = findMax (a, n-1);
          return max(a[n-1], restMax);
}
int main() {
    int a[] = {7,2,9,4};
    cout << findMax (a,4) << endl;
}