#include<stdio.h>
int main()
{
 int arr[5]={4,5,6,7};
 printf("The base address of array id %p or %p\n",arr,&arr);
 printf("After incrementing by 1, the address are %p %p\n",arr+1,&arr+1);
 return 0;
}
