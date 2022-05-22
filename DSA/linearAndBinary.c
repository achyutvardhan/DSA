#include<stdio.h>
int linear(int arr[], int element,int size )
{
    for (int  i = 0; i <size ; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
        
    }
    return -1;
    
}
int binary(int arr[], int element, int size){
int low,mid,high;
low=0;    
high=size-1;
while (low<=high)
{
    mid = (high+low)/2;
    if (mid == element)
    {
        return mid;
    }
    if (arr[mid]< element)
    {
        low = mid+1;
    }
    else
    {
        high= mid-1;
    }
    
    
}
return -1;

    
}

int main()
{ int arr[]={1,3,5,56,64,73,123,225,444};
int size = sizeof(arr)/sizeof(int);
  int element= 444;
  linear(arr,element,size);
  printf("\n");
 printf ("%d",binary(arr,element,size));
    
    return 0;
}
