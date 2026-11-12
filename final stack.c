#include <stdio.h>
#define max 5
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
        printf("enter your value\n");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("%d is inserted into the stack", value);
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
        printf("%d is poped from stack ", stack[top]);
        top--;
    }
}
void peek()
{
    if (top == -1)
    {
        printf("stcak is empty ");
    }
    else
    {
        printf("top = %d", stack[top]);
    }
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("stcak is empty");
    }
    else
    {
        printf("stack element\n");
        for (i = top; i >= 0; i--)

            printf("%d\n", stack[i]);
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("    stck menu    \n");
        printf("1 push\n");
        printf("2 pop\n");
        printf("3 peek\n");
        printf("4 display\n");
        printf("5 exit\n");

        printf("enter your choice: \n");
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
            printf("inavlid chouce\n");
        }
    }
}
