#include<stdio.h>
#define Add(x,y,z) Add##x(y,z)

int Addint(int n1,int n2)
{
	return n1+n2;
}

float Addfloat(float f1,float f2)
{
	return f1+f2;
}

int main()
{
	printf("Addition of 10,20 is %d\n",Add(int,10,20));
	printf("Addition of 10.02,20.5 is %f\n",Add(float,10.02,20.5));
	return 0;
}
