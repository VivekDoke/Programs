#include<stdio.h>
int main()
{
 int n1;
 char ch;
 float fl;
 double db;
 signed int sint;
 unsigned int usint;
 long int li;
 short int si;
 long long int lli;
 long double  ldb;
 printf("int - %ld\n",sizeof(n1));
 printf("char - %ld\n",sizeof(ch));
 printf("float - %ld\n",sizeof(fl));
 printf("double - %ld\n",sizeof(db));
 printf("signed int - %ld\n",sizeof(sint));
 printf("unsigned int - %ld\n",sizeof(usint));
 printf("long int - %ld\n",sizeof(li));
 printf("short int - %ld\n",sizeof(si));
 printf("long long int - %ld\n",sizeof(lli));
 printf("long double int - %ld\n",sizeof(ldb));
 return 0;
}
