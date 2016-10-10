// A B C D E
// A B C D
// A B C
// A B
// A 

#include<stdio.h>
void pattern6(int n)
{
        int i,j,k;
        for(i=0;i<n;i++)
        {
                for(j=0,k=65;j<n-i;j++,k++)
                        printf("%c ",k);
        printf("\n");
        }

}

int main()
{
        int n;
        printf("Enter number of rows - ");
        scanf("%d",&n);
        pattern6(n);
        return 0;
}
