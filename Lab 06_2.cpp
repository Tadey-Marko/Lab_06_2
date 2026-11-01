#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void fillArray(int a[], int n) {
    for (int i = 0; i < n; ++i) a[i] = -20 + rand() % 41;
}
void printArray(const int a[], int n) {
    for (int i = 0; i < n; ++i) cout << setw(5) << a[i];
    cout << '\n';
}
int countOdd(const int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; ++i)
        if (a[i] % 2 != 0) ++count;
    return count;
}
#ifndef UNIT_TEST
int main() {
    int n;
    cout << "Enter array size (1..1000): ";
    if (!(cin >> n) || n < 1 || n > 1000) {
        cerr << "Invalid array size.\n"; return 1;
    }
    int* a = new int[n];
    srand(3);
    fillArray(a, n);
    cout << "Array: ";
    printArray(a, n);
    cout << "Number of odd elements: " << countOdd(a, n) << '\n';
    delete[] a;
    return 0;
}
#endif
