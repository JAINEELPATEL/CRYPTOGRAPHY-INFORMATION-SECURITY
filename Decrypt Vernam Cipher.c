//A C program to illustrate Vernam Cipher Decryption -variation of vigener cipher
#include<stdio.h>
#include<string.h>
int main()
{
    char pt[30]={'\0'},kt[30]={'\0'},ct[30]={'\0'},c,k;
    int ctl,kl;
    
    printf("Enter Cipher Text : ");
    gets(ct);
    printf("Enter Key : ");
    gets(kt);
    ctl = strlen(ct);
    kl = strlen(kt);
    if(ctl==kl)
    {
        for(int i=0;i<=ctl;i++)
        {
            c=ct[i]%65;
            k=kt[i]%65;
            pt[i]=((c-k+26)%26)+'A';
        }
        printf("Plain Text: %s\n", pt);
    }
    else
    {
        printf("Invalid Key");
    }
    return 0;
}