//Rail Fence Cipher (Transposition Cipher)

#include <stdio.h>
#include <string.h>
int main()
{
    char pt[100]="Hello World",ct[100];
    int key=3,len=strlen(pt),i,j,k=-1,row=0,col=0,index=0,count;
    char rail[key][len];
    for(i=0;i<key;i++)
        for(j=0;j<len;j++)
            rail[i][j]='\n';
    for(i=0;i<len;i++,col++)
    {
        rail[row][col]=pt[i];
        if(row==0 || row==key-1)
            k=k*-1;
        row=row+k;
    }
    printf("\nEncrypted Message :");
     for(i=0;i<key;i++)
        for(j=0;j<len;j++)
            if(rail[i][j]!='\n')
            {    
                //printf("%c",rail[i][j]);
                ct[index++]=rail[i][j];
            }
            printf("%s\n",ct);
//Decryption
	count=0;
	j=0;
	printf("\nDecrypted Message :");
	while(j<len)
	{
		if(count%2==0)
		{
			 for(i=0;i<key;i++)
 			{
			  printf("%c",rail[i][j]); 
			  j++;
			 }
		}
		else
		{
			 for(i=key-2;i>0;i--)
			 {	
			  printf("%c",rail[i][j]);
 			  j++;
			 }  
		} 
	count++;
	}
    return 0;
}