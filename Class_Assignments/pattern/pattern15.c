//	       A
//	     A B A
//   	   A B C B A
// 	 A B C D C B A
//	   A B C B A
//	     A B A
//	       A

#include<stdio.h>
void pattern4(int n)
{
        int i,j,k,l,t;
        if(n<=0)
                printf("Invald Input\n");
        for(i=1;i<=n;i++)
        {
                for(j=0;j<n-i;j++)
                        printf("  ");
                for(k=1,t=65;k<=i;k++,t++)
                        printf("%c ",t);
                for(l=i-1,t=64+i-1;l>=1;l--,t--)
                        printf("%c ",t);
	        printf("\n");
        }

	for(i=1;i<n;i++)
        {
		for(j=0;j<i;j++)
			printf("  ");
		for(k=1,l=65;k<n-i+1;k++,l++)
			printf("%c ",l);
		for(l=n-i-1,t=64+l;l>=1;l--,t--)
			printf("%c ",t);
		printf("\n");
	}
}

int main()
{
        int n;
        printf("Enter number of rows - ");
        scanf("%d",&n);
        pattern4(n);
        return 0;
}

