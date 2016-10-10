//       A
//     A B A
//   A B C B A
// A B C D C B A

#include<stdio.h>
void pattern4(int n)
{
        int i,j,k,l,t;
	if(n<=0)
		printf("Invald Input\n");
        for(i=1;i<=n;i++)
        {
                for(j=0;j<n-i;j++)
                        printf("\t");
                for(k=1,t=65;k<=i;k++,t++)
                        printf("%c\t",t);
                for(l=i-1,t=64+i-1;l>=1;l--,t--)
                        printf("%c\t",t);
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

