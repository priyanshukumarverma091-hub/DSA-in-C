#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int *arr;
    int top;
    int capacity;
};

// Create Stack
struct Stack* createStack(int size) {
    struct Stack *s = (struct Stack*)malloc(sizeof(struct Stack));

    s->arr = (int*)malloc(size * sizeof(int));
    s->top = -1;
    s->capacity = size;

    return s;
}

// Push
void push(struct Stack *s, int value) {

    // Array full hai
    if (s->top == s->capacity - 1) {

        s->capacity = s->capacity * 2;

        s->arr = (int*)realloc(
            s->arr,
            s->capacity * sizeof(int)
        );

        printf("Stack size increased to %d\n", s->capacity);
    }

    s->top++;
    s->arr[s->top] = value;

    printf("%d pushed\n", value);
}

// Pop
void pop(struct Stack *s) {

    if (s->top == -1) {
        printf("Stack Underflow\n");
        return;
    }

    printf("%d popped\n", s->arr[s->top]);

    s->top--;
}

// Peek
void peek(struct Stack *s) {

    if (s->top == -1) {
        printf("Stack is empty\n");
        return;
    }

    printf("Top element = %d\n", s->arr[s->top]);
}

// Display
void display(struct Stack *s) {

    if (s->top == -1) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack: ");

    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->arr[i]);
    }

    printf("\n");
}

int main() {

    struct Stack *s = createStack(2);

    push(s, 10);
    push(s, 20);

    // Stack full -> automatically resize
    push(s, 30);
    push(s, 40);
    push(s, 50);

    display(s);

    peek(s);

    pop(s);
    pop(s);

    display(s);

    // Free memory
    free(s->arr);
    free(s);

    return 0;
}
