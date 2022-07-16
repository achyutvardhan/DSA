#include<stdio.h>
#include<stdlib.h>

struct DEqueue
{
   int f;
   int r;
   int*arr;
   int size;
};
int dequeueF(struct DEqueue * ptr)
{ int a=-1;
    if (ptr->f==ptr->r)
    {
        printf("queue is empty");
    }
    else{
        ptr->f++;
        a=ptr->arr[ptr->f];  
    }
    return a;
}
void enqueueR(struct DEqueue * ptr , int val)
{
  if (ptr->r == ptr->size-1)
  {
    printf("queue is full");
  }
  else{
    ptr->arr[++ptr->r];
  }
  
}

void enqueueF(struct DEqueue * ptr , int val){
    if (ptr->f ==-1)
    {
        printf("value can't be added in queue");
    }
    else{
        ptr->arr[ptr->f--]=val;
    }
    
}
int dequeueR(struct DEqueue * ptr){
    
}
int main()
{
    struct DEqueue * q= (struct DEqueue*)malloc(sizeof(struct DEqueue));
    q->f,q->r =-1;
    q->size =5;
    q->arr = (int *)malloc(q->size*sizeof(int));
    
    return 0;
}
