// aaaaassdddee
// a5s2d3e2


#include<stdio.h>
#include<string.h>
void Occurance_character(char *inp, char out[])
{
	int i=0,count=1,j=1,k=0;
	
	while(inp[i]!='\0')
	{
		while(inp[i]==inp[j])
		{
			count++;
			j++;	
		}	

		if(count)
		{
			out[k]=inp[i];
			out[k+1]=count+'0';			// converting interger to character
			k=k+2;
		}

		i++;
		count=0;
	}

	out[k]='\0';
}


int main()
{
	char string[50],output[50],A;
	printf("Enter the string (a-z) - ");
	scanf("%s",string);
	Occurance_character(string,output);
	int len1,len2;
	len1=strlen(string);
	len2=strlen(output);
	if(len1<len2)
		printf("%s\n",string);
	else
		printf("%s\n",output);	
	return 0;
}
