#include<stdio.h>

int count ( int *a,int n,int e )
{ 
    static int c=0;
if (n>0&&a[n-1]==e)
{   
printf("%d\n",c);
    c++;
   return count(a,--n,e);
}

}
int main()
{
    int a[] ={1,5,5,6,8};
    int n = 5;
    int element = 5;
    printf("%d ",count(a,n,element));
    
    return 0;
}
