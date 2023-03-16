//A C program to illustrate Poly Alphabatic Cipher-Vigenere Cipher Encryption

#include<stdio.h>
#include<string.h>
int main()
{
    char pt[30]={'\0'},key[10]={'\0'};
    int ptl, kl, i, j;
    
    printf("Enter Plain Text : ");
    gets(pt);
    printf("Enter Key : ");
    gets(key);
    ptl = strlen(pt);
    kl = strlen(key);
    char newKey[ptl], ct[ptl];
    //New Key Generation
    for(i = 0, j = 0; i < ptl;i++,j++)
    {
        if(j == kl)
            j = 0;
 
        newKey[i] = key[j];
    }
    newKey[i] = '\0';
    //Encryption in cipher
    for(i = 0; i < ptl; ++i)
        ct[i] = ((pt[i] + newKey[i]) % 26) + 'A';
 
    ct[i] = '\0';

    printf("\nOriginal Message: %s", pt);
    printf("\nKey: %s", key);
    printf("\nNew Generated Key: %s", newKey);
    printf("\nEncrypted Message: %s", ct);
    
    return 0;
}