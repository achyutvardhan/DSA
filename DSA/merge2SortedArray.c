#include <stdio.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void mergeSort(int a[], int b[], int c[], int m, int n, int p)
{
    int i, j, k;
    i = k = j = 0;

    while (k < p)
    {
        if (a[i] <= b[j] && i < n && j < m)
        {
            c[k] = a[i];
            i++;
            k++;
        }
        if (b[j] < a[i] && i < n && j < m)
        {
            c[k] = b[j];
            j++;
            k++;
        }
        if (i >= n)
        {
            c[k] = b[j];
            k++;
            j++;
        }

        if (j >= m)
        {
            c[k] = a[i];
            k++;
            i++;
        }

       
    }

}


int main()
{
    int n = 4, m = 5;
    int p = m + n;
    int a[] = {2, 3, 4, 5};
    int b[] = {1, 5,6, 7, 8};
    int c[p];
    printArray(a, n);
    printf("\n");
    printArray(b, m);
    printf("\n");
    mergeSort(a, b, c, m, n, p);
    printArray(c, p);
    return 0;
}
