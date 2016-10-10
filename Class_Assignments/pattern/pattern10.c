// 1 4 9 16 25 
//   1 4  9 16
//     1  4  9
//        1  4
//	     1

#include<stdio.h>
void pattern4(int n)
{
        int i,j,k,l;
        for(i=1;i<=n;i++)
        {
                for(j=0;j<i;j++)
                        printf("\t");
                for(k=1;k<n-i+2;k++)
                        printf("%d\t",k*k);
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

