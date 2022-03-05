#include <stdio.h>
void binary(int b)
{
    int k[100];
    int i = 0;
    printf("\n");
    while(b>0)
    {
        k[i]= b%2;
        b= b/2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--){
        printf("%d",k[j]);
    }
    
    printf("\n");
}

void enQueue(int value,int *rear,int *front,int items[],int SIZE) 
{
  if (*rear == SIZE - 1)
  {
    printf("\nQueue is Full!!");
  }
  else 
  {
    if (*front == -1)
      *front = *front+ 1;
    *rear = *rear+1;
    items[*rear] = value;
    
  }
}

void deQueue(int *rear,int *front,int items[],int SIZE) 
{
  if (*front == -1)
  {
    printf("\nQueue is Empty!!");
  }
  else 
  {
      binary(items[*front]);
    *front = *front+ 1;
    
    if (*front > *rear)
    {
        *front = *rear = -1;
    }
  }
}


int main() 
{
  int n;
  printf("Enter the end value : ");
  scanf("%d",&n);
  int SIZE = n;
  int items[SIZE], front = -1, rear = -1;
  for(int i=1; i<=SIZE; i++)
  {
      enQueue(i,&rear,&front,items,SIZE);
  }
  for(int i=1; i<=SIZE; i++)
  {
      deQueue(&rear,&front,items,SIZE);
  }
  return 0;
}
