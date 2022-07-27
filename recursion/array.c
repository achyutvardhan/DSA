#include<stdio.h>

void print(int *a,int n)
{
if (n>0)
{
   printf("%d ",a[n-1]);
   print(a,n-1);
}

}
int main()
{
    int a[] ={1,4,5,6,8};
    int n = 5;
    print(a,n);
    return 0;
}
