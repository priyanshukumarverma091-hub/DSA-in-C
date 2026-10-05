#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack1[MAX], stack2[MAX];
int top1 = -1, top2 = -1;
int size;

// Stack operations
void Push1(int data)
{
    if (top1 == size - 1)
    {
        printf("\nQueue Overflow!\n");
        return;
    }
    stack1[++top1] = data;
}

int Pop1()
{
    return stack1[top1--];
}

void Push2(int data)
{
    stack2[++top2] = data;
}

int Pop2()
{
    return stack2[top2--];
}

// Queue operations using stacks
void Enqueue(int data)
{
    Push1(data);
    printf("\n%d enqueued successfully.\n", data);
}

void Dequeue()
{
    if (top1 == -1)
    {
        printf("\nQueue Underflow!\n");
        return;
    }

    // Move all elements from stack1 to stack2
    while (top1 != -1)
    {
        Push2(Pop1());
    }

    // Remove the front element
    int removed = Pop2();
    printf("\n%d dequeued successfully.\n", removed);

    // Move back remaining elements to stack1
    while (top2 != -1)
    {
        Push1(Pop2());
    }
}

void Display()
{
    if (top1 == -1)
    {
        printf("\nQueue is Empty!\n");
        return;
    }

    printf("\nQueue Elements: ");
    for (int i = 0; i <= top1; i++)
    {
        printf("%d ", stack1[i]);
    }
    printf("\n");
}

int main()
{
    int choice, data;

    printf("Enter Size of Queue: ");
    scanf("%d", &size);

    while (1)
    {
        printf("\n--- Queue Using Stacks ---");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to enqueue: ");
            scanf("%d", &data);
            Enqueue(data);
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            Display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid Choice!\n");
        }
    }
    return 0;
}
