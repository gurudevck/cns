#inlcude<stdio.h>
#inlcude<ctype.h>
int main()
{
    char text[50], ch;
    int key;
    printf("Enter message: ");
	scanf("%s",text);
	printf("Enter key: ");
	scanf("%d",&key);
	for(int i=0;text[i]!='\0';i++)
	{
		ch=text[i];
		if(isalnum(ch))
		{
			if(islower(ch))
				ch=(ch-'a'+key)%26+'a';
			if(isupper(ch))
				ch=(ch-'A'+key)%26+'A';
			if(isdigit(ch))
				ch=(ch-'0'+key)%26+'0';
		}
		else
			printf("Invalid Message");
		text[i]=ch;
	}
	printf("Encrypted Message : %s\n",text);
	for(int i=0;text[i]!='\0';i++)
	{
		ch=text[i];
		if(isalnum(ch))
		{
			if(islower(ch))
				ch=(ch-'a'-key+26)%26+'a';
			if(isupper(ch))
				ch=(ch-'A'-key+26)%26+'A';
			if(isdigit(ch))
				ch=(ch-'0'-key+26)%26+'0';
		}
		else
			printf("Invalid Message");
		text[i]=ch;
	}
	printf("Decrypted Message : %s\n",text);
	return 0;
}
