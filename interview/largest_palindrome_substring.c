//Input - asdfghgfdsa

//Output - asdfghgfdsa
//	   sdfghgfds
//	   dfghgfd
//	   fghgf
//	   ghg	   

#include<stdio.h>
int check_palindrome(char[],int,int);

int maximum_length(int *r,int t)
{
	int max,min,i;
	max=min=r[0];
	for(i=0;i<t;i++)
	{
		if(r[i]>max)
			max=r[i];
		else
			min=r[i];
	}
//		printf("max-%d min - %d\n",max,min);
	return max;
}

void largest_palindrome_substr(char str[50],int len)
{
	int i=0,j=2,test,l=0,n=0,min,max;
	int palin_mtrx[20][50],c[20],r[20],t=0;
	{
		while(i<=len && j<=len)
		{

			while(j<=len)
			{
				test=check_palindrome(str,i,j);
				if(test == 1)
				{
					int m=i;
					while(m<=j)
					{
//Only printing						printf("%c",str[m]);
						palin_mtrx[l][n]=str[m];
						m++,n++;
					}
					palin_mtrx[l][n]='\0';
//					printf("\n%d %d\n",l,n);
//					printf("\n");
					r[t]=n;
					c[t]=l;
//					printf("r[%d] - %d\n",t,r[t]);
					l++,n=0,t++;
				}
				j=j+2;
			}

			i++;
			j=i+2;
		}
	}
	for(i=0;i<t;i++)
//		printf("%d\t",r[i]);
//	printf("\n---------------\n");
	max = maximum_length(r,t);
	printf("Length Max - %d\n",max);
//	printf("r[0]-%d r[1]-%d\n",r[0],r[1]);
//	printf("maximum length - %d\n",max);
/*	for(i=0;i<l;i++)
	{
		for(j=0;palin_mtrx[i][j]!='\0';j++)
		{
			printf("%c",palin_mtrx[i][j]);
		}
		printf("\n");	
	}

*/
	j=0;
	int flag;
	while(j<t)
	{
		if(max==r[j])
		{
			break;
		}	
		j++;
	}
	int k=0;
	while(k<=max)
	{
		printf("%c",palin_mtrx[j][k]);
		k++;
	}
	printf("\n");
/*
	for(i=0;i<l;i++)
	{
		for(j=0;palin_mtrx[i][j]!='\0';j++)
		{
			printf("%c",palin_mtrx[i][j]);
		}
		printf("\n");	
	}
*/
}

int check_palindrome(char str[50],int i,int j)
{
	int t=j;
	while(i<=j)
	{		
		if(str[i]==str[j])
		{
			i++,j--;
		}
		else
			break;
	}
	if(str[i]==str[j])	
	{
		return 1;
	}
	else
		return -1;
}

int main()
{
	int i=0;
	char str[50];
	printf("Enter the string - ");
	scanf("%s",str);
	while(str[i]!='\0')
		i++;
	largest_palindrome_substr(str,i-1);
	return 0;
}
