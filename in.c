#include <stdio.h>
#define max 5
int f

    int
    main()
{
    int choice;
    while (1)
    {
        printf("-----queue menu------\n");
        printf("1. enqueue: ");
        printf("2. dequeue: ");
        printf("3. display: ");
        printf("4. exit: ");
    }
    switch (choice)

    {
    case 1:
        enqueue();
        break;

    case 2:
        dequeue();
        break;

    case 3:
        display();
        break;

    case 4:
        printf("exit");
        return 0;

    default:
        printf("invalid choice\n");
    }
    return 0;
}
