#include<stdio.h>
char * mystrlwr(char *s)
{
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]>=65 && s[i]<=90)
			s[i]=s[i]+32;
		i++;
		
	}
	return s;

}

int main()
{
	char str[20];
	puts("ENter a string - ");
	gets(str);
	mystrlwr(str);
	puts("Lowercase string - ");
	puts(str);
}


