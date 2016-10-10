#include <stdio.h>
 
int global; /* Uninitialized variable stored in bss*/
 
int main(void)
{
    static int i=12; /* Uninitialized static variable stored in bss */
    return 0;
}
