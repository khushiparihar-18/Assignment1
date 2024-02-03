#include<stdio.h>
#include<stdlib.h>
int greaterThan(char *s1, char *s2){
    // Same strings
    if(*s1 == '\0'&& *s2 == '\0'){
        return 0;
    }
    
    else if(*s1 < *s2){
        return -1;
    }
    else if(*s1 > *s2){
        return 1;
    }
    return greaterThan(s1+1, s2+1);
}
int main(){
    char s1[20];
    char s2[20];
    printf("Enter the string1 : ");
    scanf("%s", s1);
    printf("Enter the string2 : ");
    scanf("%s", s2);
    int value = greaterThan(s1,s2);
    printf("value = %d", value);
    return 0;
}