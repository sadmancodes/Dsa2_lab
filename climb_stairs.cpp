#include <iostream>

int calls = 0;
int ways (int n) {
    calls++;
    if (n == 0 || n == 1)
       return 1;
       return ways (n-1) + ways (n-2);
}
int main(){
    int n = 4;
    std::cout << "Ways:" << ways (n) << std:: endl;
    std::cout << "calls:" << calls << std:: endl;
}