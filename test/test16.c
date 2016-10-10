#include <stdio.h>
#define crypt(s,t,u,m,p,e,d) m##s##u##t
#define begin crypt(a,n,i,m,a,t,e)
int begin()
{
printf("Hello\n");
return 0;
}
