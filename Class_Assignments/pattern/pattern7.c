// 	 *
//     * *
//   * * *
// * * * *

#include<stdio.h>
void pattern4(int n)
{
        int i,j,k;
        for(i=1;i<=n;i++)
        {
                for(j=0;j<n-i;j++)
                        printf(" ");
		for(k=0;k<i;k++)
			printf("*");
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
