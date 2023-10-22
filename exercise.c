#include <stdio.h>

int main() {
    int n = 10;

    // Exercise 1: Print numbers from n to n+3
    for (int i = n; i <= n + 3; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Exercise 2: Print numbers from 3 to -3
    for (int i = 3; i >= -3; i--) {
        printf("%d ", i);
    }
    printf("\n");

    // Exercise 3: Print numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        printf("%d, ", i);
    }
    printf("%d\n", n);

    // Exercise 4: Print the squares of numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        printf("%d, ", i * i);
    }
    printf("%d\n", n * n);

    // Exercise 5: Sum of numbers from 1 to n
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of 1 thru %d = %d\n", n, sum);

    // Exercise 6: Sum of squares of numbers from 1 to n
    int sumOfSquares = 0;
    for (int i = 1; i <= n; i++) {
        sumOfSquares += i * i;
    }
    printf("Sum of 1^2 thru %d^2 = %d\n", n, sumOfSquares);

    // Exercise 7: Sum of even numbers from 1 to n
    int sumOfEvens = 0;
    for (int i = 2; i <= n; i += 2) {
        sumOfEvens += i;
    }
    printf("Sum of even numbers 1 thru %d = %d\n", n, sumOfEvens);

    return 0;
}
