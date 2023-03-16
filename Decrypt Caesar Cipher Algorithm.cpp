// A C program to illustrate Caesar Cipher Technique Decryption

#include<stdio.h>
#include<ctype.h>
int main()
{
    char text[500], ch;
    int key;
    printf("Enter a message to decrypt: ");
    scanf("%s", text);
    printf("Enter the key: ");
    scanf("%d", & key);
    for (int i = 0; text[i] != '\0'; ++i) 
    {
        ch = text[i];
        if (isalnum(ch)) 
        {
            // lower case characters
            if (islower(ch)) 
            {
                ch = (ch - 'a' - key + 26) % 26 + 'a';
            }
            // uppercase characters
            if (isupper(ch)) 
            {
                ch = (ch - 'A' - key + 26) % 26 + 'A';
            }
            // digits
            if (isdigit(ch)) 
            {
                ch = (ch - '0' - key + 10) % 10 + '0';
            }
        }
        else
        {
            printf("Invalid Message");
        }
        text[i] = ch;
    }
    printf("Encrypted message: %s", text);
    return 0;
}