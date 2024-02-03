#include <stdio.h>

int search(int L[], int n, int num) {
    if (n == 0) {
        // false 
        return 0; 
    }

    if (L[0] == num) {
        // true 
        return 1; 
    }

    return search(L + 1, n - 1, num);
}

int main() {
    int L[] = {1, 2, 3, 4, 5};
    int n = sizeof(L) / sizeof(L[0]);
    int num;
    printf("Enter number\n");
    scanf("%d",&num);

    if (search(L, n, num)) {
        printf("%d is found in the list.\n", num);
    } else {
        printf("%d is not found in the list.\n", num);
    }

    return 0;
}
