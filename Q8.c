#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int palin(char S[],int s,int n){
    if(n==0 && n==1){
        return 1;
    }
    if(s>=n){
        return 1;
    }
    if(S[s] != S[n-1]){
     return 0;
    }
    else{
        return palin(S,s+1,n-1);
    }
        // int i=0;
        // if(S[i] != S[n-1]){
        //     return 0;
        //     i++;
        // }
        // else{
        //     palin(S,n-1);
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     if (S[i] != S[n-1])
        //     {
        //         return 0;
        //     }

        //     else{
        //         return 1;
        //     }
            
        }
        
    // }
// }
int main()
{
    // int n;
    // printf("Enter length of string\n");
    // scanf("%d",&n);
    char S[50];
    printf("Enter String\n");
    scanf("%s",S);
    // int length=strlen(S)/strlen(sizeof(S[0]));
    int n=strlen(S);
    printf("%d\n",palin(S,0,n)); 
    return 0;
}