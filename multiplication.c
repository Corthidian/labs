#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("ERROR: Invalid number of command-line arguments.\n");
        printf("Usage: %s <n>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);

    if (n <= 0) {
        printf("ERROR: Invalid input value. Please provide a positive integer.\n");
        return 1;
    }

    // Print the top row
    printf("---");
    for (int i = 1; i <= n; i++) {
        printf("%4d", i);
    }
    printf("\n");

    // Generate and print the multiplication table
    for (int i = 1; i <= n; i++) {
        printf("%2d |", i);
        for (int j = 1; j <= n; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}