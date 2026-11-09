#include <iostream>
#include <vector>
using namespace std;

void merge(int A[], int l, int m, int r) {
    int n1 = m-l+1, n2 = r-m;
    vector<int> L(A+l, A+m+1);
    vector<int> R(A+m+1, A+r+1);

    int i=0, j=0, k=l;
    while (i<n1 && j<n2) {
        if (L[i] <= R[j]) A[k++] = L[i++];
         else A[k++] = R[j++];
    }
    while (i < n1) A[k++] = L[i++];
    while (j < n2) A[k++] = R[j++];
}
void mergeSort (int A[], int l, int r) {
    if (l >= r) 
     return;
    int m= (l+r)/2;
    mergeSort (A, l, m);
    mergeSort (A, m+1, r);
    merge (A, l, m, r);


}
int main() {
    int A[] = {7,2,9,4,3,8,6,1};
    int n= 8;
    mergeSort (A, 0, n-1);
    for (int i= 0; i< n; i++) 
    cout << A[i] << " ";
    cout << endl;
    return 0;
}


