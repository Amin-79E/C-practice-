#include <stdio.h>
#define CAPACITY 64

typedef struct
{
    int arr[CAPACITY];
    int top;
} Stack;

void init(Stack *s)           { s->top = -1; }
int  is_empty(const Stack *s) { return s->top == -1; }
int  is_full(const Stack *s)  { return s->top == CAPACITY - 1; }

int push(Stack *s, int v)
{
    if (is_full(s))
        return 0; 
    s->arr[++s->top] = v;
    return 1;
}

int pop(Stack *s, int *out)
{
    if (is_empty(s))
        return 0;
    *out = s->arr[s->top--];
    return 1;
}

int peek(const Stack *s, int *out)
{
    if (is_empty(s))
        return 0;
    *out = s->arr[s->top];
    return 1;
}

int main(void)
{
    long base;
    int exp;

    printf("Enter the base and a strictly positive exponent: ");
    if (scanf("%ld %d", &base, &exp) != 2)
        return 1;
    if (exp <= 0 || exp >= CAPACITY)
    {
        printf("Invalid input for the exponent.\n");
        return 1;
    }

    Stack s;
    init(&s);

    for (int e = exp; e >= 0; e--)
    {
        if (!push(&s, e))
        {
            printf("Stack overflow.\n");
            return 1;
        }
        printf("push %d, address = %p\n", e, (void *)&s.arr[s.top]);
    }

    /* "Returns": unwind from pow(0) back to pow(exp) */
    long result = 0;
    int e;
    while (!is_empty(&s))
    {
        printf("pop  %d, address = %p\n", s.arr[s.top], (void *)&s.arr[s.top]);
        pop(&s, &e);
        result = (e == 0) ? 1 : base * result;
    }

    printf("result of %ld ^ %d is: %ld\n", base, exp, result);
    return 0;
}
