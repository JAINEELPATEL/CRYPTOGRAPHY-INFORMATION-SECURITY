//A C program to illustrate Row / Columnar Transposition Algorithm
//ENCRYPTION

#include<stdio.h>
#include<string.h>
int main()
{
    char pt[30]={'\0'},kt[30]={'\0'},ct[30]={'\0'};
    
    printf("Enter Plain Text : ");
    gets(pt);
    printf("Enter Key : ");
    gets(kt);
    int ptl = strlen(pt);
    int kl = strlen(kt),col=kl;
    int row=ptl/kl;
    char m[row][col];
    int k=0;
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            m[i][j]=pt[k++];
    k=0;
    for(int i=0;i<col;i++)
    {
        int c = (int)(kt[i]);
        c=c-48;
        c--;
        for(int j=0;j<row;j++)
            ct[k++]=m[j][c];
    }
    ct[k]='\0';
    printf("Cipher Text: %s\n", ct);
    return 0;
}