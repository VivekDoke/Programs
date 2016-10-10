#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strrev(char * str) {
    int j = 0, i = 0;
    while(str[j+1]) j++;
    while(i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
 
int main() {
   int num1, num2;
   char str[10];
 
   printf("\nEnte the Number : ");
   scanf("%d", &num1);
 
   sprintf(str, "%d", num1);
   strrev(str);
   num2 = atoi(str);
 
   printf("\nReversed Number : ");
   printf("%d", num2);
 
   return 0;
}
