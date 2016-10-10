/*
Sample Input 0 - aaabccddd
Sample Output 0 - abd

Sample Input 1 - baab
Sample Output 1 - Empty String

Sample Input 2 - aa
Sample Output 2 - Empty String
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int check_distinct_word(char strg[], int len)
{
        int i=0,j=1,flag=0;
        while(i<len)
        {
                while(j<len)
                {

                        if(strg[i]==strg[j] && i!=j)
                        {
                                flag=1;
				return flag;
                        }
			else
			{
				i++;
               			j++;
			}
		}
		if(flag==1 && i==len-2 || j==len)
		break;
        }
        return flag;
}

int main()
{
        int i,j,k,flag=1,m,control=0,c=0,len;
        char str[100],res_str[100];
        scanf("%s",str);
        for(i=0;str[i]!='\0';i++);
        len=i;
	if(len==1)
	{
		printf("%s\n",str);
		return 0;
	}
	while(flag)
	{
		i=0,j=1,k=0;
		while(i<len-1 && j<len && len>=2)
		{
			if(len==2 && str[0]==str[1])
	        	{
				printf("Empty String\n");
				return 0;
			}
	       		if(str[i]==str[j])
			{
				i=i+2;
				j=j+2;
			 	if(i == len-1 && j==len)
				{
					if(str[i]==str[j])
					{	
						res_str[k]=str[j-1];
						printf("res_str[%d]-%c\n",k,res_str[k]);
						k++;
						break;
					}
					else
					{
						j--;
	                                        printf("-- k-1 %d\n",k-1);
						if(k-1>=0)
						{
							res_str[k-1]=str[j];
							k++;
						}
					}
				}
				else if(control!=0 && i<=len-1 && j<=len)
				{
					i++,j++;
				}

				if(i<=len-1 && j<=len && str[i-2]!=str[j-2])
				{
					i++;
					j++;
				}
				if(i == len-2 && j==len-1 && str[i]!=str[j])
				{
					res_str[k]=str[i];
					res_str[k+1]=str[j];
					k=k+2;
				}
			} 	
			else
			{
				res_str[k]=str[i];
				res_str[k+1]=str[j];
	                        printf("res_str[%d]-%c res_str[%d]-%c\n",k,res_str[k],k+1,res_str[k+1]);

				k=k+2;
				i++,j++;
                              printf("i-%d j-%d\n",i,j);

				if(str[i]!=str[j])
				{
					k--;
				}
			}
			control++;
		}
              printf("k+1 %d\n",k+1);

		res_str[k+1]='\0';
		for(i=0;res_str[i]!='\0';i++);
		if(i==0 && res_str[0]==0)
		{
			printf("Empty String\n");
			return 0;
		}
		for(m=0;res_str[m]!='\0';m++);	
              printf("res_str - %s m-%d\n",res_str,m);        

		flag =  check_distinct_word(res_str,m);

		strcpy(str,res_str);
              printf("%s\n",str);
	
	}
	       	printf("%s\n",str);
	return 0;
}

