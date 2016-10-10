// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include<stdio.h>
void pattern4(int n)
{
        int i,j,k;
        for(i=0;i<n;i++)
        {
                for(j=0,k=10;j<n-i;j++,k++)
                        printf("%d ",j+1);
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
