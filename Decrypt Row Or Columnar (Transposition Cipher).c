//A C program to illustrate Row / Columnar Transposition Algorithm
//DECRYPTION

#include<stdio.h>
#include<string.h>
int main()
{
    char pt[30]={'\0'},kt[30]={'\0'},ct[30]={'\0'};
    
    printf("Enter Cipher Text : ");
    gets(ct);
    printf("Enter Key : ");
    gets(kt);
    int ctl = strlen(ct);
    int kl = strlen(kt),col=kl;
    int row=ctl/kl;
    char m[row][col];
    int k=0;
    for(int i=0;i<col;i++)
    {
        int c = (int)(kt[i]);
        c=c-48;
        c--;
        for(int j=0;j<row;j++)
            m[j][c]=ct[k++];
    }
    k=0;
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            pt[k++]=m[i][j];
    pt[k]='\0';
    printf("Plain Text: %s\n", pt);
    return 0;
}