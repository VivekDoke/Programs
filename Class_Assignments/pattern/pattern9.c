//    A
//   AB
//  ABC
// ABCD

#include<stdio.h>
void pattern4(int n)
{
        int i,j,k,l;
        for(i=1;i<=n;i++)
        {
                for(j=0;j<n-i;j++)
                        printf(" ");
                for(k=0,l=65;k<i;k++,l++)
                        printf("%c",l);
        printf(" \n");
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

