#include <stdio.h>

int Fibonacci(int n) ;
int FibonacciSeries(int n) ;

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int sum = FibonacciSeries(n);
        printf("Sum = %d\n", sum);
    }

    return 0;
}


int Fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int FibonacciSeries(int n) {
    int sum = 0;
    printf("Series = ");
    for (int i = 1; i <= n; i++) {
        int fib = Fibonacci(i);
        sum += fib;
        printf("%d", fib);
        if (i < n) {
            printf(" + ");
        }
    }
    printf("\n");
    return sum;
}