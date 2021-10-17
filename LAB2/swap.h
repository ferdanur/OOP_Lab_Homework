#include <iostream>

void swapUsingAddress(int* m, int* n) {
    int temp = *m;
    *m = *n;
    *n = temp;
}

void swapByReference(int& m, int& n) {
    int temp = m;
    m = n;
    n = temp;
}