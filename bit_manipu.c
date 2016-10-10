#include<stdio.h>
struct receiver
{
 int a;
 int parity:1;
 int data;
 unsigned int mode:1;
 int function(int n)
 {
	printf("%d\n",n);
 }
};

int main()
{
	struct receiver obj;
	obj.a=3;
	printf("%ld\n",sizeof(obj));	
	obj.function(obj.a);
	return 0;
}
