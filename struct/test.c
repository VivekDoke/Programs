#include<stdio.h>
#pragma pack(1)
//void function();
struct Emp
{
	int no;
	int salary;
	char name[10];
	void fdnction();
};

void fdnction()
{
	printf("Hello i am in function\n");
}

int main()
{
	struct Emp E2;
	printf("%ld\t%ld\t%ld\t%ld\n",sizeof(E2.no),sizeof(E2.name),sizeof(E2.salary),sizeof(E2));
	return 0;
}
