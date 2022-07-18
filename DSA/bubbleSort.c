  #include<stdio.h>
  #include<stdlib.h>

void printArray(int* a,int n){
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}

void bubbleSort(int *a,int n)
{ 
for (int i = 0; i < n-1; i++)
{  
    for (int j = 0; j < n-1-i; j++)
    {
        if (a[j]>a[j+1])
        {
            int c = a[j];
            a[j] = a[j+1];
            a[j+1]= c;
        }
        
    }
    
}
printf("\n");
}

int sortedArraySwap(int *a, int n){
        int count=0 ;
    for (int i = 0; i < n-1; i++)
    {  
        if (a[i]>a[i+1])
        {
            count++;
            break;
        }
    }
    return count;
}
  int main()
  {
    int a[] = {1,2 ,3,4,5,6 };
    // int a[] = {1, 2, 5, 6, 12, 54, 625, 7, 23, 9, 987};
    int n =6;
    printArray(a,n); // array before sorting 
    
     if (sortedArraySwap(a,n)>0)
     {
        printf("\narray is not sorted");
        bubbleSort(a,n);
        printArray(a,n);// array after sorting
     }
       else{
        printf("array is already sorted");
       }
    return 0;
  }
  