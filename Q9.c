#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void replace(char s[], int n, char c1, char c2) {
    if (n==0)
    {
        return; //do nothing
    }
  if(s[0]==c1){  
    s[0]=c2;     //if the first character of S is c1, then replace it by c2
  }
  replace (s + 1, n - 1 , c1 , c2 );    // Now we're Replacing all occurrences of the character c1 in the remaining string (S without the first character) by the character c2.

    
}
int main()
{
    char s[56];
    printf("Enter string\n");
    scanf("%s",s);
    char c1,c2;
    printf("Enter the character you want to replace\n");
    scanf(" %c",&c1);
    printf("Enter the character you want to replace with\n");
    scanf(" %c",&c2);

    int n = strlen(s);
    replace(s,n,c1,c2);
    printf("Modified String is %s\n",s);
    return 0;
}


