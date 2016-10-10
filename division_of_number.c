//Wrong output ..Incomplete

#include<stdio.h>

int Factors_of_Number(int num,int *fa_nu)
{
        int i,j=0,t=num;
    	
        for(i=1;i<=num/2;i++)
        {
		if(t%i==0)
		{
			fa_nu[j]=i;
			j++;
//			t=t/i;
		}
	}	               
       
	return j--;
}


void Division_of_Number(int nu,int de)
{
	int out1[20],out2[20],i=0,j=0,len_num,len_den;
	len_num=Factors_of_Number(nu,out1);
	len_den=Factors_of_Number(de,out2);

	while(i!=len_num)
	{
		printf("%d ",out1[i]);
		i++;
	}

	printf("\n");

	while(j!=len_den)
	{
		printf("%d ",out2[j]);
		j++;
	}
	printf("\n");
}

int main()
{
	int m,n;
	printf("Enter the Numerator and Denominator resp. - ");
	scanf("%d%d",&m,&n);
	Division_of_Number(m,n);
	return 0;
}
