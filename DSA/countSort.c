#include <stdio.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int max(int *a, int n)
{
    int max = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
void countSort(int *a, int n, int max)
{   int m =max+1;
    int b[m];
    int c[n];
    for (int i = 0; i < m+1; i++)
    {
        b[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        b[a[i]]++;
    }
    int j=0;
    for (int i = 0; i < m; i++)
    {
        while (b[i]!=0)
        {
           c[j]=i;
           j++; 
           b[i]--;
        }
        
    }
    printArray(c,n);
    
}
int main()
{
    int a[] = {3,1,9,7,1,2,4};
    int n = 7;
    int m = max(a, n);
    countSort(a, n, m);
    
    return 0;
}
