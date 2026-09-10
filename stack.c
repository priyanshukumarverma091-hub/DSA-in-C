\\Implement Stack Using a Static Array\\

#include <stdio.h>
#define max 10

int stack[max];
int top = -1;

void push()
{
    int value;
    if (top == max - 1)
    {
        printf("stack is full\n");
    }
    else
    {
        printf("enter value in stack:");
        scanf("%d", &value);

        top++;
        stack[top] = value;
        printf("%d is pushed into stack\n", value);
        {
        }
    }
}

void pop()
{
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("%d is popped from stack\n", stack[top]);
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("top = %d\n", stack[top]);
    }
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("Stack elements:\n");

        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("-------------stack menu -------------\n");
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. peek\n");
        printf("4. display\n");
        printf("5. exit\n");

        printf("enter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            printf("exit");
            return 0;

        default:
            printf("invalid choice");
        }
    }
    return 0;
}
