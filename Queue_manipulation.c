#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *front;
    Node *rear;
} Queue;

int isEmpty(Queue *q) { return q->front == NULL; }

void enqueue(Queue *q, int v) {
    Node *n = malloc(sizeof(Node));
    if (!n) { printf("Memory allocation failed.\n"); return; }
    n->data = v;
    n->next = NULL;
    if (isEmpty(q)) q->front = q->rear = n;
    else { q->rear->next = n; q->rear = n; }
}

int dequeue(Queue *q, int *out) {
    if (isEmpty(q)) return 0;
    Node *t = q->front;
    *out = t->data;
    q->front = t->next;
    if (!q->front) q->rear = NULL;
    free(t);
    return 1;
}

void display(Queue *q) {
    if (isEmpty(q)) { printf("Queue is empty.\n"); return; }
    printf("Front -> ");
    for (Node *p = q->front; p; p = p->next)
        printf("%d -> ", p->data);
    printf("NULL\n");
}

void clear(Queue *q) {
    int tmp;
    while (dequeue(q, &tmp));
}

int main(void) {
    Queue q = {NULL, NULL};
    int choice, v, n;

    do {
        printf("\n1. Enqueue integers\n2. Dequeue an integer\n"
               "3. View front element\n4. Display queue\n"
               "5. Clear queue\n0. Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            choice = -1;
        }

        switch (choice) {
            case 1:
                printf("How many integers? ");
                if (scanf("%d", &n) != 1) { while (getchar() != '\n'); break; }
                for (int i = 0; i < n; i++) {
                    printf("Value %d: ", i + 1);
                    if (scanf("%d", &v) != 1) { while (getchar() != '\n'); i--; continue; }
                    enqueue(&q, v);
                }
                break;
            case 2:
                if (dequeue(&q, &v)) printf("Dequeued: %d\n", v);
                else printf("Queue is empty.\n");
                break;
            case 3:
                if (isEmpty(&q)) printf("Queue is empty.\n");
                else printf("Front: %d\n", q.front->data);
                break;
            case 4: display(&q); break;
            case 5: clear(&q); printf("Queue cleared.\n"); break;
            case 0: clear(&q); printf("Goodbye.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}