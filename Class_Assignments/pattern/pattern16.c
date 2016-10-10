#include<stdio.h>
void pattern(int n)
{
        int i,j,k,l,t=0;
        for(i=1;i<=n;i++)
        {
                for(k=0;k<i;k++)
                        printf("*");
		for(j=0;j<=3;j++)
			printf(" ");
		for(;k<n-i;k++)
			printf("*");
       		printf("\n");
        }

}

int main()
{
        int n;
        printf("Enter number of rows - ");
        scanf("%d",&n);
        pattern(n);
        return 0;
}

