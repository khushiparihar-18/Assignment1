#include <stdio.h>
#include<stdlib.h>
int hcf(int n1,int n2){
    int r=n1%n2;
    if(r==0){
        return n2;
    }
    else{
        return hcf(n2,r);
    }
}
int main()
{
    int n1,n2;
    printf("Enter numbers n1 and n2\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    if(n1>n2){
    printf("Hcf is %d\n",hcf(n1,n2));
    }
    else{
    printf("Hcf is %d\n",hcf(n2,n1));
}
    return 0;
}