 #include<stdio.h>
 #include<stdlib.h>

void printArray(int *a, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void selectionSort(int *a , int n){
 int min ;
 int j;
 for (int i = 0; i < n-1; i++)
 {
    min = a[i];
    for (int k = i+1;k< n; k++)
    {
        if (min>a[k])
        {
           min =a[k];
           j=k;
        }
        
    }
    a[j]=a[i];
    a[i] =min;
    
 }

 
 
}

// code with harry code

// void selectionSort(int *A, int n){
//     int indexOfMin, temp;
//     printf("Running Selection sort...\n");
//     for (int i = 0; i < n-1; i++)
//     {
//         indexOfMin = i;
//         for (int j = i+1; j < n; j++)
//         {
//             if(A[j] < A[indexOfMin]){
//                 indexOfMin = j;
//             }
//         }
//         // Swap A[i] and A[indexOfMin]
//         temp = A[i];
//         A[i] = A[indexOfMin];
//         A[indexOfMin] = temp;
//     }
// }


 int main()
 {
    int a[]={3, 5, 2, 13, 12};
    int n = 5;
    printArray(a,n);// array before sorting
    selectionSort(a,n);
    printArray(a,n); // array after sorting

    return 0;
 }
 