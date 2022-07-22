#include <stdio.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}


void mergeSort(int *a, int n, int *b, int low, int mid, int high)
{
    int j = mid + 1;
    int i = low;
    int k = low;
    while (k < n)
    {
        if (a[i] >= a[j] && i <= mid && j <= high)
        {
            b[k] = a[j];
            j++;
            k++;
        }
        if (a[i] < a[j] && i <= mid && j <= high)
        {
            b[k] = a[i];
            i++;
            k++;
        }
        if (i > mid)
        {
            b[k] = a[j];
            j++;
            k++;
        }
        if (j > high)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }
}

int main()
{
    int a[] = {7, 15, 2, 8, 10};
    int n = 5;
    int b[n];
    int l = 0;
    int h = n - 1;
    int m = 1;
    printArray(a, n);
    mergeSort(a, n, b, l, m, h);
    printArray(b, n);
    return 0;
}
