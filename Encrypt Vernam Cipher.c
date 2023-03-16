//A C program to illustrate Vernam Cipher Encryption -variation of vigener cipher

#include<stdio.h>
#include<string.h>
int main()
{
    char pt[30]={'\0'},kt[30]={'\0'},ct[30]={'\0'},p,k;
    int ptl,kl;
    
    printf("Enter Plain Text : ");
    gets(pt);
    printf("Enter Key : ");
    gets(kt);
    ptl = strlen(pt);
    kl = strlen(kt);
    if(ptl==kl)
    {
        for(int i=0;i<=ptl;i++)
        {
            p=pt[i]%65;
            k=kt[i]%65;
            ct[i]=((p+k)%26)+'A';
        }
        printf("Cipher Text: %s\n", ct);
    }
    else
    {
        printf("Invalid Statement");
    }
    return 0;
}