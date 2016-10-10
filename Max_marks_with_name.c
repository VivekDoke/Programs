#include<stdio.h>
int main()
{
	int marks[10],i=0;
	char name[10][10];
	char ch;	
	while(1)
	{
		scanf("%s%d",name[i],&marks[i]);	
		printf("Enter you want to continue (Y/N)- ");
		scanf("%c",&ch);
		if(ch=='Y'||ch=='y')
			i=i+1;
		else
			break;
	}
	printf("\n");
	return 0;
}
