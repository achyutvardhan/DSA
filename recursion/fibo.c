#include<stdio.h>

void febo(int a,int b,int n)
{ 
    if (n>0)
    {
        int sum = a+b;
        a=b;
        b=sum;
        printf("%d ", sum);
        febo(a,b,--n);
    }
    
}
int main(int argc, char const *argv[])
{
    int n= 5;
    int a= 0;
    int b=1;
    // int sum=0;
    printf("%d %d ", a,b);
    // for (size_t i = 0; i < n; i++)
    // {
    //      sum  =  a+b;
    //     a=b;
    //     b=sum;
    //     printf("%d ",sum);
    // }
febo(a,b,n);

    return 0;
}
