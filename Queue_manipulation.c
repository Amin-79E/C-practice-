#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

typedef struct
{
    Node *front;
    Node *rear;
}Queue;

int empty(Queue *q)
{
    return q->front == NULL;
}

void enqueue(Queue *q, int k)
{
    Node *n = malloc(sizeof(Node));
    if(n == NULL)
    {
        printf("Failed memory allocation.\n");
        return;
    }
    n->data = k; //the value of data.
    n->next = NULL; //new node is last.

    if(empty(q))
    {
        q->front = q->rear = n; // in case the queue is empty.
    }
    else
    {
        q->rear->next = n;   //link the last node to this new one.
        q->rear = n; //the new node.
    }
}

int dequeue(Queue *q, int *remove)
{
  if(empty(q))
  {
    return 0;// all is empty to begin with.
  }

  Node *temp = q->front;
  *remove = temp->data;
  q->front = temp->next;

  if(q->front == NULL)
    {
        q->rear = NULL;
    }
    free(temp);
    return 1;
}

void display(Queue *q)
{
    if(empty(q))
    {
        printf("The Queue is empty.\n");
        return;
    }

    for(Node *p = q->front ; p != NULL ; p= p->next)
    {
        printf("%d -> ", p->data);
    }
    printf("NULL\n");
}

void clear(Queue *q)
{
    int clear;
    while(dequeue(q ,&clear));
}

int main(void)
{
    Queue q ={NULL, NULL};
    int choice, n, input;

       do{
        printf("\n1. Enqueue integers\n2. Dequeue an integer\n3. View front element\n4. Display queue\n5. Clear queue\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        if(choice < 0 || choice > 5)
        {
            printf("Stick to the choices above, try again: ");
        }

       switch(choice)
       {

        case 1:
             printf("Enter how many integers you want to enter:  ");
             do{
                scanf("%d", &n);
                if(n<=0)
                {
                    printf("Invalid input, must be a positive integer: ");
                }
             }while(n<=0);

             for(int i=0; i<n ; i++)
             {
                printf("The %d value: ", i+1);
                scanf("%d",&input);
                enqueue(&q, input);
             }
        break;

        case 2:
             if(dequeue(&q, &input))
             {
                printf("Dequeued: %d\n", input);
             }
             else
             {
                printf("The Queue is empty.\n");
             }
        break;

        case 3:
             if(empty(&q))
             {
                printf("The Queue is empty.\n");
             }
             else
             {
                printf("Front = %d\n", q.front->data);// here used the . because the struct is in main.
             }
        break;

        case 4:
             display(&q);
        break;

        case 5:
             clear(&q);
        break;
        
        case 0:
             clear(&q);
        break;
        
        default: break;

        }

    }while(choice != 0);

    return 0;
}
