#include<stdio.h>
#include<string.h>

int Reverese_String(char *src,char *dest)
{
	int i=0,j,count=1;
	for(j=1;src[j]!='\0';j++);
	j--;
	while(src[i]!='\0')
	{
//		printf("%c\n",src[j]);
		dest[i]=src[j];
		i++;
		j--;
	}
	dest[i]='\0';
	return *dest;
}

int main()
{
        int count,i;
        char str[50];
	char dest[50];
        printf("Enter the string - ");
        scanf("%[^\n]",str);
//	printf("%ld\n",strlen(str));
	Reverese_String(str,dest);
        printf("The words in string are - %s\n",dest);
	return 0;
}

