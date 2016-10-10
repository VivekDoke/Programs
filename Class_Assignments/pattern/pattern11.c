//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include<stdio.h>
void pattern4(int n)
{
        int i,j,k,l;
        for(i=1;i<=n;i++)
        {
                for(j=0;j<n-i;j++)
                        printf("  ");
                for(k=1;k<=i;k++)
                        printf("%d ",k);
		for(l=i-1;l>=1;l--)
			printf("%d ",l);
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

