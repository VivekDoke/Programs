int foo( int a, int b)
{
int c = a-b;
c = c&(0x80000000);
return (!c)*a +(!!c)*b;
}
