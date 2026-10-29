#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *create_node(int value) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->data = value;
    n->next = NULL;
    return n;
}

Node *add_node(Node *head, int value) {
    Node *n = create_node(value);
    n->next = head;
    return n;
}

void print_list(const Node *head) {
    for (; head; head = head->next)
        printf("%d -> ", head->data);
    printf("NULL\n");
}

int search_two_largest(const Node *head, int *first, int *second) {
    if (!head || !head->next) return 0;

    *first  = head->data;
    *second = head->next->data;
    if (*second > *first) {
        int tmp = *first; *first = *second; *second = tmp;
    }

    for (const Node *cur = head->next->next; cur; cur = cur->next) {
        if (cur->data > *first) {
            *second = *first;
            *first  = cur->data;
        } else if (cur->data > *second) {
            *second = cur->data;
        }
    }
    return 1;
}

void free_list(Node *head) {
    while (head) {
        Node *tmp = head;
        head = head->next;
        free(tmp);
    }
}

int main(void) {
    Node *head = NULL;
    int values[] = {12, 45, 7, 89, 23, 56, 3};
    int n = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < n; i++)
        head = add_node(head, values[i]);

    print_list(head);

    int first, second;
    if (search_two_largest(head, &first, &second))
        printf("Largest: %d\nSecond largest: %d\n", first, second);
    else
        printf("The list needs at least 2 elements.\n");

    free_list(head);
    return 0;
}
