#include<stdio.h>

void recursion(int n){
    if (n<51)
    {
   printf("%d " ,n);
   n++;
    recursion(n);
        /* code */
    }
    
}
int main()
{
    int i=1;
    recursion(i);
    return 0;
}
