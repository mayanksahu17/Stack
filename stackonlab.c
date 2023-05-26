#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX];
int TOP = -1;
void push()
{
    if (TOP == MAX - 1)
    {
        printf("\nStack Undderflow");
    }
    else
    {
        TOP++;
        printf("Enter the element to be phushed: ");
        scanf("%d",&stack[TOP]);
        printf("%d element phushed\n");
    }
}
void pop()
{
    if (TOP == -1)
    {
        printf("\nstack Underflow\n");
    }
    else
    {
        printf("%d element is deleted", stack[TOP]);
        TOP--;
    }
}
void display()
{
    int temp;
    temp = TOP;
    printf("\nElements are: \n");
    while (temp >= 0)
    {
        printf("%d\n",stack[temp]);
        temp--;
    }
}
void displayone()
{
    if (TOP == -1)
    {
        printf("\nstack Underflow\n");
    }
    else
    {
        printf("\n%d", stack[TOP]);
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n1.push\n");
        printf("2.pop\n");
        printf("3.Display the top element\n");
        printf("4.Display all stack element\n");

        printf("5.Quit");
        printf("\nEnter your choice: ");
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
            displayone();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("\nWrong choice\n");
        }
    }
    return 0;
}