#include <stdio.h>

int search(int L[], int n, int num)
{
    // List of size 0 implies that list is Empty
    if (n == 0)
    {
        return 0;
    }
    //  First item of list is the searched number ....-> true
    if (L[0] == num)
    {
        return 1;
    }
    // Search for number in remaining n-1 numbers with updated list
    return search(L + 1, n - 1, num);
}

int main()
{
    int n;
    printf("Enter the size of list\n");
    scanf("%d", &n);
    int L[n];
    for (int i = 0; i < n; i++)
    {
        printf("%d element in list is : ", i);
        scanf("%d", &L[i]);
    }

    int num;
    printf("Enter number to be search in the list \n");
    scanf("%d", &num);

    if (search(L, n, num))
    {
        printf("%d is found in the list.\n", num);
    }
    else
    {
        printf("%d is not found in the list.\n", num);
    }

    return 0;
}
