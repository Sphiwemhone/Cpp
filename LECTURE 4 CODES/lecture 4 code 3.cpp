#include <stdio.h>

int adder(int n1, int n2) {
    printf("Adder was called: ");
    return n1 + n2;
}

int divider(int n1, int n2) {
    printf("Divider was called: ");
    return n1 / n2;
}

void printResult(int n1, int n2, int (*fPtr)(int, int)) {
    printf("%d\n", fPtr(n1, n2));
}

int main(void) { 
    int num1 = 10;
    int num2 = 5;

    printResult(num1, num2, adder);
    printResult(num1, num2, divider);

    printf("\n");

    getchar();  
    return 0;
}