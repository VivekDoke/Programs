#include<stdio.h>
union test
{
	int no;
	char name;
	char add;
};


int main()
{
	union test t1={'c'};
	printf("%ld\t%ld\t%ld\t%ld\t%d\n",sizeof(t1.no),sizeof(t1.name),sizeof(t1.add),sizeof(t1),t1.no);
	return 0;
}
