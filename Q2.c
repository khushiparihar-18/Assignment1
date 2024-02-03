#include <stdio.h>
#include<stdlib.h>
// Iterative approach
// int sum(int n){
//         printf("Enter number\n");
//         int n1;
//         int sum=0;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&n1);
//         sum=sum+n1;
//           }
// if(n==1){
//     sum=n1;
//     return sum;
// }
// else{
//     return sum;
// }
//     }
// Recursive Approach 
   int sum(int n){
        int num;
        scanf("%d",&num);
    if(n==1){
        return num;
    }
    else{
        return num+sum(n-1);
    }
   } 

int main()
{
    int n;
    printf("Enter number of integers\n");
    scanf("%d",&n);
    // int sum=sum(n);
    printf("Sum of integers is %d\n",sum(n));
    return 0;
}