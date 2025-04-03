#include <stdio.h>
#include <string.h>
int main()
{
    printf("\nEnter a string ");
    char s[20],t,rev[20],alph[20];
    scanf("%s",s);
    printf("\nThe string in alphabetical order: \n");
    strcpy(alph,s);
    for(int i=0;i<strlen(s);i++)
    {
        for(int j=0;j<strlen(s)-i-1;j++){
            if(alph[j]>alph[j+1]){
                t=alph[j+1];
                alph[j+1]=alph[j];
                alph[j]=t;
            }
        }
    }
    for(int i=0;i<=strlen(s);i++){
        printf("%c",alph[i]);
    }
    printf("\nEnter the character to search: ");
    char c;
    int count=0;
    scanf(" %c",&c);
    for(int i=0;i<strlen(s);i++){
        if(s[i]==c)
            count++;
    }
    if(count==0){
        printf("\nThe character %c is not found",c);
    }
    else
        printf("\nThe character %c found %d times",c,count);
    for(int i=0;i<strlen(s);i++){
        rev[i]=s[strlen(s)-i-1];
    }
    if(strcmp(rev,s)==0){
        printf("\nThe string is a palindrome");
    }
    else
        printf("\nThe string is not a palindrome");
    return 0;
}
