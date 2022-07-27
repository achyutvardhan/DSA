#include<stdio.h>

int count ( int n )
{ 
    static int c=0;
if (n!=0)
{   c++;
   return count(n/10);
}
return c;
}
int main()
{
    int n = 25;
    int element = 5;
    printf("%d ",count(n));
    
    return 0;
}
