#include <stdio.h>

int adder(int n1, int n2) {
    return n1 + n2;
}

int main(void) {
    int (*fPtr)(int, int);

    fPtr = adder;

    printf("Using a name of function: %d\n", adder(10, 20));
    printf("Using a function pointer: %d\n", fPtr(10, 20));

    return 0;
}