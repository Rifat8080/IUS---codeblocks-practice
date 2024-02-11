#include <stdio.h>

// Function to calculate the sum of numbers from 1 to n recursively
int recursiveSum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + recursiveSum(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int sum = recursiveSum(n);
    printf("The sum of numbers from 1 to %d is %d\n", n, sum);
    return 0;
}
