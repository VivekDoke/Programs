#include<stdio.h>

#include<stdlib.h>

typedef struct
{
	int top;
	int size;
	int *stack;

}STACK;

void push(STACK *stack, const int data);
int pop(STACK *stack);
int peep(STACK *stack);
int isEmpty(STACK *stack);
int isFull(STACK *stack);
void init(STACK *stack, int size)
{
	int *mallocptr;
	printf("Enter the number of records - ");
	scanf("%d",&size);

}
void DeInit(STACK *stack);

int main()
{

	return 0;
}
