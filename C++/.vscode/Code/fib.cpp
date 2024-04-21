#include <iostream>

using namespace std;

int fib(int n) {
    if (n == 0) return 0;  
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int i, a[10];
    for (i = 0; i < 10; i++) {
        a[i] = fib(i);
    }
    for (i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    return 0;  // Added return statement
}
