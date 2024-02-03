#include <stdio.h>

int Largest(int n) {
    if (n == 1) {
        int num;
        scanf("%d", &num);
        return num;
    }
    int lastInteger;
    scanf("%d", &lastInteger);

    int largestInRemaining = Largest(n - 1);
    // if last integer is greater than largest among the remaining integers than return last integer otherwise return largest among the remaining integers
    return (lastInteger > largestInRemaining) ? lastInteger : largestInRemaining;
}

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int largest = Largest(n);

    printf("The largest integer is: %d\n", largest);

    return 0;
}
