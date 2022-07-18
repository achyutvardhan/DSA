#include <stdio.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void insertionSort(int *a, int n)
{
    int sorted;
    int key;

    // this is my written code
    
    // for (int i = 0; i < n - 1; i++)
    // {   
    //     sorted = i;
    //     for (int j = sorted; j >= 0; j--)
    //     {
    //         if (a[sorted + 1] < a[j])
    //         {
    //             int temp = a[sorted + 1];
    //             a[sorted + 1] = a[j];
    //             a[j] = temp;
    //         }
    //         sorted--;
    //     }


    // }

    for (int i = 1; i < n-1; i++)
    {
       key = a[i];
       sorted = i-1;
       while (key<a[sorted]&&sorted >-1)
       {
        a[sorted+1]=a[sorted];
        sorted--;
       }
       a[sorted+1]= key;
    }
    




}
int main()
{
    // int a[]={7,12,3,4,1};
    int a[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
    int n = 9;
    printArray(a, n);
    printf("\n");
    insertionSort(a, n);
    printArray(a, n);
    return 0;
}

