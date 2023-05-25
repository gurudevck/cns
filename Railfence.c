#include<stdio.h>
#include<ctype.h>
#include<string.h>

void decrypt();
void encrypt();

void main()
{
    char pt[50],key[10],enc[50];
    printf("enter plain text:\n");
    scanf("%s",pt);
    printf("enter key:\n");
    scanf("%s",key);
    encrypt(pt,key,enc);
    printf("encrypted text: %s\n",enc);
    decrypt(enc,key);
    printf("decrypted key: %s\n",enc);
    
}

void encrypt(char pt[],char key[],char enc[])
{
    int t=strlen(pt);
    int k =strlen(key);
    int i=0;
    for(;pt[i]!='\0';i++)
        enc[i]=(char)(((pt[i])-65)+(key[i%k]-65))%26+65;
    enc[i]='\0';
}
void decrypt(char enc[],char key[]){
    int t = strlen(enc);
    int k = strlen(key);
    int i=0;
    for(;enc[i]!='\0';i++)
        enc[i]=(char)((enc[i]-65)-(key[i%k]-65)+26)%26+65;
}