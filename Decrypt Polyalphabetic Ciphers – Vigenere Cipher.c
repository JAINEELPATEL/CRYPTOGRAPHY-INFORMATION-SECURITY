//A C program to illustrate Poly Alphabatic Cipher-Vigenere Cipher Decryption

#include<stdio.h>
#include<string.h>
int main()
{
    char ct[30]={'\0'},key[10]={'\0'};
    int ctl, kl, i, j;
    
    printf("Enter Cipher Text : ");
    gets(ct);
    printf("Enter Key : ");
    gets(key);
    ctl = strlen(ct);
    kl = strlen(key);
    char newKey[ctl], pt[ctl];
    //New Key Generation
    for(i = 0, j = 0; i < ctl;i++,j++)
    {
        if(j == kl)
            j = 0;
 
        newKey[i] = key[j];
    }
    newKey[i] = '\0';
    //Decryption in cipher
    for(i = 0; i < ctl; ++i)
        pt[i] = ((ct[i] - newKey[i]+26) % 26) + 'A';
 
    pt[i] = '\0';

    printf("\nCipher Text: %s", ct);
    printf("\nKey: %s", key);
    printf("\nNew Generated Key: %s", newKey);
    printf("\nDecrypted Message: %s", pt);

    return 0;
}