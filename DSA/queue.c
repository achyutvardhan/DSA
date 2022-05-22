#include<stdio.h>
#include<stdlib.h>
struct queue
{   int size;
    int f;
    int b;
    int * arr;
};
int isFull(struct queue *q)
{
     if (q->b==q->size-1)
     {
         return 1;
     }
     else
     return 0;
     
}
int isEmpty(struct queue *q)
{
    if (q->b==-q->f)
    {
        return 1;
    }
    else
    return 0;
    
}
int enqueue(struct queue *q, int val)
{
   if (isFull(q))
   {
        printf("overflow of queue");
   }
   else
   {
       q->b++;
       q->arr[q->b]=val;
   }
}
int dequeue(struct queue*q)
{ int a=-1;
    if (isEmpty(q))
    {
        printf("queue underflow");
    }
    else{ 
         q->f++;
         a= q->arr[q->f];
    }
    return a;
}
int main()
{
    struct queue* q= (struct queue *)malloc(sizeof(struct queue));
    q->b=-1;
    q->f=-1;
    q->size = 4;
    q->arr = (int *)malloc(q->size*sizeof(int));
     // Enqueue few elements
    enqueue(q, 12);
    enqueue(q, 15);
    enqueue(q, 1); 
    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q)); 
        enqueue(q, 45);
 
    if(isEmpty(q)){
        printf("Queue is empty\n");
    }
    if(isFull(q)){
        printf("Queue is full\n");
    }
    
    return 0;
}
