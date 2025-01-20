#include <stdio.h>

int Factorial(int n) ;

int main() {
    int n;

    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("%d! = ", n);
        for (int i = n; i > 0; i--) {
            printf("%d", i);
            if (i > 1) {
                printf(" x ");
            }
        }
        printf("\n");

        
        int result = Factorial(n);
        printf("%d! = %d\n", n, result);
    }

    return 0;
}

int Factorial(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return n * Factorial(n - 1);
}