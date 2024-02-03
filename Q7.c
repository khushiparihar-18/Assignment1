#include <stdio.h>
#include<stdlib.h>
// Iterative Approach
// void reverse(int L[],int n){
//    for (int i = n-1; i >= 0; i--)
//    {
//     printf("Elements in reverse order are:%d\n", L[i]);
//    }
   
// }
// Recursive Approach 
int  reverse(int L[],int n){
  if(n==0){
    printf("List is Empty so there is nothing to print\n");
    return 0;
  }
  else{
    printf("%d\n",L[n-1]);
  }
  reverse(L,n-1);
  return 1;
  
}
int main()
{
    int n;
    printf("Enter the size of the list\n");
    scanf("%d",&n);
    int L[n];
    for (int i = 0; i < n; i++)
    {
        printf("%d element of the list is :",i);
        scanf("%d",&L[i]);
    }
          reverse(L,n);
    
    return 0;
}