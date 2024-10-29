#include <stdio.h>
#include <stdlib.h>
#define MAX 100
struct queue{
 int items[MAX];
 int front;
 int rear;
};
struct queue*createQueue(){
    struct queue* Queue = (struct queue*)malloc(sizeof(struct queue));
    Queue->front = -1;
    Queue->rear = -1;
    return Queue;
}
int isEmpty(struct queue* Queue){
    return Queue->front== -1;
}
int isFull(struct queue* Queue){
    return Queue->rear==MAX - 1;
}
void enqueue(struct queue* Queue, int value) {
    if (isFull(Queue)) {
        printf("Queue is full. Cannot enqueue %d.\n", value);
        return;
    }
   if(isEmpty(Queue)){
       Queue->front=0;
   }
    Queue->rear++;
    Queue->items[Queue->rear] = value;
    printf("Enqueued: %d\n", value);
}
int dequeue(struct queue* Queue)
{
    if(isEmpty(Queue)){
        printf("the Queueid is empty cannot dequeue\n");
        return -1;
    }
    int item=Queue->items[Queue->front];
    if (Queue->front >= Queue->rear) {
        Queue->front = -1;
        Queue->rear = -1;
    } 
    else
    {
        Queue->front++;
    }
     printf("Dequeued: %d\n", item);
    return item;
}
void displayQueue(struct queue* Queue){
    if (isEmpty(Queue))
    {
      printf("queue is empty.\n");
      return;
    }
    printf("queue elements: ");
    for(int i= Queue->front;i<=Queue->rear;i++) 
    {
        printf("%d ", Queue->items[i]);
    }
    printf("\n");
}
int main()
{
    struct queue*Queue=createQueue();
    int choice,value;
    while(1){
        printf("\n1. Enqueue\n2. Dequeue\n3. Display Queue\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter a value to enqueue: ");
                scanf("%d", &value);
                enqueue(Queue, value);
                break;
            case 2:
                dequeue(Queue);
                break;
            case 3:
                displayQueue(Queue);
                break;
            case 4:
                printf("Exiting the program.\n");
                free(Queue);
                exit(0);
            default :printf("invalid input");    
    }
}
   
} 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   