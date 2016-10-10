// A
// A B
// A B C
// A B C D
// A B C
// A B
// A

#include<stdio.h>
void pattern4(int n)
{
        int i,j,k,l,t;
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=i;j++)
		{
                        printf("%d\t",j);
		}
			
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

