/*
Bill loves sorted strings very much. A string is sorted if it has all occurrences of 'a' comes first, then all occurrences of 'b', then 'c',..........,  at last, 'z'.
Now, Bill wants to know that, how many minimum numbers of characters from a given string S, he should delete to make it a sorted string.

Input:
A single integer T, in the first line, denoting the number of test cases.
For each test case, a string S, in a single line.

Output:
For each test case, output minimum number of characters of the string  S which need to deleted so that the resulting string is sorted, in a new line.

Constraints:
1<= T <= 100
1<= |s| <= 10000
Each string has only English lower case alphabet characters.

Sample Testcases

Input1 - abcb
Output - 1

Explanation
In this test case, if he deletes last 'b' from "abcb", then the remaining string "abc" is sorted.

Input1-vwzyx
Output-2

*/

#include <stdio.h>

int main()
{
    	int a,i=0,j=1,k=0,len;
    	char str[10];
    	scanf("%d", &a);
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++);
	len=i;
	i=0;
		while(i<len)
		{
			while(j<len)
			{
				if(str[i]<str[j])
					k++;

				i++;j++;
			}
			printf("%d\n",len-k-1);
			if(i==len-1&&j==len)
				break;
		}
    return 0;
}

