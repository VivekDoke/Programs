//Input - 5 4
//	  1 2 3 4 5
//output -5 1 2 3 4 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    	int n; 
    	int k,i,j,l; 
    	scanf("%d %d",&n,&k);
    	int *a = malloc(sizeof(int) * n);
	int *b = malloc(sizeof(int) * n);
    	for(int a_i = 0; a_i < n; a_i++){
       		scanf("%d",&a[a_i]);
    	}
	while(k > 0)
	{
		int temp = a[0];
		for(i=0;i<n-1;i++)
		{
			a[i] = a[i+1];
		}
		a[n-1]=temp;
		k-=1;
	}
	for(int a_i = 0; a_i < n; a_i++){
       		printf("%d ",a[a_i]);
    	}
	printf("\n");
	return 0;
}
