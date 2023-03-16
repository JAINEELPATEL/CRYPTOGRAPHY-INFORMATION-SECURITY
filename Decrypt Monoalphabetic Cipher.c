//A C program to illustrate Monoalphabetic Cipher - Decryption

#include<stdio.h>
#include<string.h>
void main()
{
    char pt[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char ct[26]={'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'};
    char c[20],p[20]={'\0'};
    int i,j;
    printf("Enter Cipher Text : ");
    gets(c);
    //converting cipher text into plain text (decryption)
    for(i=0;i<strlen(c);i++)
    {
        for(j=0;j<26;j++)
        {
            if(ct[j]==c[i])
            {
                p[i]=pt[j];
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
        printf("Plain Text : %s",p);
    }
}