// A B C D C B A
//   A B C B A
//     A B A
//	 A

#include<stdio.h>
void pattern4(int n)
{
        int i,j,k,l,t;
        for(i=1;i<=n;i++)
        {
                for(j=0;j<i;j++)
                        printf("\t");
                for(k=1,l=65;k<=n-i+1;k++,l++)
                        printf("%c\t",l);
		for(l=n-i-1,t=64+l;l>=1;l--,t--)
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

