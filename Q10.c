#include <stdio.h>
#include<stdlib.h>

 void swap(int *a ,int *b){
    int temp;
     temp=*a;
    *a=*b;
    *b=temp;
 }
 void sorted(int A[],int n){
    if(n<=1){
        return; //do nothing
    }
    int largestindex = 0;
    for (int i = 0; i < n; i++)
    {
    if(A[i] > A[largestindex]){
        largestindex=i;
    }
    }
    swap(&A[largestindex] , &A[n-1]);  //We've to put the largest element of arrat at last position because we want ot sort elements of array in ascending order
    sorted(A,n-1);
 }

int main()
{
    int A[100];
    int n;
    printf("Enter number of Elements in array\n");
    scanf("%d",&n);
    printf("Enter elements\t");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    sorted(A,n);
       printf("Elements in ascending order : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",A[i]);
    }
    
    return 0;
}