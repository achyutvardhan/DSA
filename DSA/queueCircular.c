#include<stdio.h>
#include<stdlib.h>
struct queue
{
   int f;
   int b;
   int size;
   int *arr;
};

void enqueue(struct queue *q, int val)
{
    if ((q->b+1)%q->size==q->f)
    {
        printf("queue overflow");
    } 
    else
    {   q->b=(q->b+1)%q->size;
        
        q->arr[q->b]=val;
    }
}
int dequeue(struct queue*q)
{
   if (q->f=q->b)
  {
    printf("empty queue");
  }
  else{
      q->f=(q->f+1)%q->size;
      return q->arr[q->f];
  }
    
}
int main()
{ struct queue * q=(struct queue*)malloc(sizeof(struct queue));
q->f=-1;q->b=0;
q->size=4;
q->arr= (int *)malloc(q->size*sizeof(int ));
     
    return 0;
}
