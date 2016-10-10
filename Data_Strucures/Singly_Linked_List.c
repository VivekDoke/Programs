#include<stdio.h>
#include<stdlib.h>

struct Student* InsertStudent(struct Student * insertHead, int RollNo, int Position); 

struct Student
{
	int rollno;
	struct Student *next;
};

struct Student* CreateStudentsList(int noOfStudents)
{
	struct Student *head=NULL;
	int i;
	for(i=1;i<=noOfStudents;i++)
	{
		int RollNo;
		printf("Enter the roll no - ");
		scanf("%d",&RollNo);
		head = InsertStudent(head,RollNo,i);
	}
	return head;
};


struct Student * InsertStudent(struct Student *insertHead,int RollNo,int Position)
{
	struct Student *student = (struct Student *)malloc (sizeof(struct Student));
	student -> rollno = RollNo;
	student->next = NULL;
	if(1 == Position)
	{
		if(NULL == insertHead)
			insertHead = student;
		else
		{
			student->next = insertHead;
			insertHead = student;
		}
	}
	else
	{
		struct Student* traverse;
		for(traverse = insertHead ; traverse->next && Position-2;traverse=traverse->next,--Position)
		;
		if(Position-2==0)
		{
			student->next=traverse->next;
			traverse->next=student;
		}
		else
		{
			printf("Wrong position Entered\n");
			free(student);
		}
	}
	return insertHead;	
};

int main()
{
	int noOfStudent;
	printf("Enter the number of students - ");
	scanf("%d",&noOfStudent);
	CreateStudentsList(noOfStudent);
	return 0;
}
