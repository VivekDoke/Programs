#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int check_distinct_word(char strg[], int len)
{
        int i=0,j=1,flag=0;
//        printf("len - %d\n",len);
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
        int i,j,k,flag=1,m,control=0,c=0;
	int len;
        char str[100],res_str[100];
        scanf("%s",str);
        for(i=0;str[i]!='\0';i++);
        len=i;
//	printf("len-%d\n",len);
	while(flag)
	{
		i=0,j=1,k=0;

//Checking the half-half string same i.e., aaasss, aaaaaaaaaaasssssssssss
/*		if(len%2==0)
                        {
                                int g=len/2;
                                for(i=0;i<g;i++)
                                {
                                        for(j=g;j<len;j++)
                                        {
                                                if(str[i]==str[j])
                                                {
                                                        if(i=g)
                                                        {
                                                                printf("Empty String\n");
								return 0;
                                                        }
                                                }
                                        }
                                }

                        }
*/
		while(i<len-1 && j<len)
		{
			if(str[0]==str[1] && len==2)
	        	{
				printf("Empty String\n");
				return 0;
			}
/*
			else if(len%2==0)
			{
				int g=len/2;
				for(i=0;i<g;i++)
				{
					for(j=g;j<len;j++)
					{
						if(str[i]==str[j])
						{
							if(i=g)
							{
								printf("Empty String\n");
							}
						}
					}
				}
	
			}*/
       			if(str[i]==str[j])
			{
				i=i+2;
				j=j+2;
				if(i == len-1 && j==len)
				{
					if(str[i]==str[j])	
						break;
					else
					{
						j--;
//						printf("-- k-1 %d\n",k-1);
						res_str[k-1]=str[j];
						k++;
					}
				}
			} 	
			else
			{
				res_str[k]=str[i];
				res_str[k+1]=str[j];
//				printf("res_str[%d]-%c res_str[%d]-%c\n",k,res_str[k],k+1,res_str[k+1]);
				k=k+2;
				i++,j++;
//				printf("i-%d j-%d\n",i,j);
				if(str[i]!=str[j])
				{
					k--;
				}	
			}
		}
//		printf("k+1 %d\n",k+1);
		res_str[k+1]='\0';
//		printf("control-%d\n",control);
/*
		s = strcmp(str,res_str);
		if(s==0 && control==1)
		{
			printf("Hello\n");
			break;
			
		}*/
		for(i=0;res_str[i]!='\0';i++);
//		printf("i - %d res_str[0]- %d\n",i,res_str[0]);
		if(i==0 && res_str[0]==0)
		{
			printf("Empty String\n");
			return 0;
		}

//		printf("%c%c%c%c%c%c\n",res_str[0],res_str[1],res_str[2],res_str[3],res_str[4],res_str[5]);
		for(m=0;res_str[m]!='\0';m++);	
//		printf("res_str - %s m-%d\n",res_str,m);	
		flag =  check_distinct_word(res_str,m);
//		printf("flag-%d\n",flag);
//		for(i=0;res_str[i]!='\0';i++)
/*
		{
//			str[i]=res_str[i];
			printf("%c",res_str[i]);
		}
		printf("\n");
*/
		strcpy(str,res_str);
//	        for(i=0;str[i]!='\0';i++)
//	       	printf("%s\n",str);

//	        printf("\n");
	}
	       	printf("%s\n",str);
	return 0;
}
/*
int main()
{
	str_manipulation();
	return 0;
}*/
