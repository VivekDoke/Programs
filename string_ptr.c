#include<stdio.h>
#include<string.h>
int main()
{
	char lang[5][20]={"Visual Basic","Java","Fortran","C","C++"};
	int i;
	char *t;
	t=lang[0];
	while(*t++!=32)
		for(i=0;i<5;i++)
		{
			puts(lang[0]);
			strcpy(t,lang[i+1]);
		}
	return 0;
}
