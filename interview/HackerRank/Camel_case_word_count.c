/*
Alice wrote a sequence of words in CamelCase as a string of letters, , having the following properties:

    It is a concatenation of one or more words consisting of English letters.
    All letters in the first word are lowercase.
    For each of the subsequent words, the first letter is uppercase and rest of the letters are lowercase.

Given , print the number of words in on a new line.

Input Format

A single line containing string s.

Output Format

Print the number of words in string s.

Sample Input	-	saveChangesInTheEditor
Sample Output	-	5
*/


#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i=0,j=1,k,count=0;
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
        while(s[i]!='\0')
            {
            while(s[i]>=97 && s[i]<=122)
                {
                i++;
                if(count==0)
                    count++;
            }
            if(s[i]>=65 && s[i]<=90)
                {
                count++;
                i++;
            }
            else
                i++;
            
        }
  printf("%d",count);
    return 0;
}
