#include <iostream>
#include <algorithm> 
using namespace std;

int A[] = {7,2,9,4,3,8,6,1};
void maxMin(int i, int j, int &fmax, int &fmin) {
    if (i == j) {
        fmax = fmin = A[i];

    }else if (i == j-1) {
        if (A[i] < A[j]) {
            fmax = A[j];
            fmin = A[i];
        } else {
            fmax = A[i];
            fmin = A[j];
        }
    } else {
        int mid = (i+j)/ 2;
        int gmax, gmin, hmax, hmin;
        maxMin(i, mid, gmax, gmin);
        maxMin(mid + 1, j, hmax, hmin);
        fmax = max(gmax, hmax);
        fmin = min(gmin, hmin);

    }
}
int main() {
    int fmax, fmin;
    maxMin (0, 7, fmax, fmin);
    cout << "Max: " << fmax << ", Min:" << fmin << endl;
    return 0;
}