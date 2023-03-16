//A C program to illustrate Monoalphabetic Cipher - Encryption

#include<stdio.h>
#include<string.h>
void main()
{
    char pt[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char ct[26]={'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'};
    char p[20],c[20]={'\0'};
    int i,j;
    printf("Enter Plain Text : ");
    gets(p);
    //converting plain text into cipher text (encryption)
    for(i=0;i<strlen(p);i++)
    {
        for(j=0;j<26;j++)
        {
            if(pt[j]==p[i])
            {
                c[i]=ct[j];
                break;
            }
        }
    }
    if(j==26)
    {
        printf("Invalid Syntax!!!");
    }
    else
    {
        printf("Cipher Text : %s",c);
    }
}