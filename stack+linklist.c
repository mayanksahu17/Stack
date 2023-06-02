#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
 typedef struct Node Node;
 Node *top;
 void display();
 void push(int item);
int pop();
int peek();
int isEmpty();


int main(){
     int choice, item;
    printf("\n1.push\n");
        printf("2.pop\n");
        printf("3.Display the top element\n");
        printf("4.Display all stack element\n");

        printf("5.Quit");
    while (1)
    {
        
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the item to be pushed: ");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            item = pop();
            printf("\nPoped item is : %d", item);  
            break;
        case 3:
            printf("Item at the top is : %d\n ", peek());
            break;
        case 4:
         display();
            break;
        case 5:
       
            exit(1);
        default:
            printf("\nWrong choice\n");
        }
    }
}
void push(int item){
Node * tmp;
tmp = (Node*)malloc(sizeof(Node));
if (tmp==NULL)
{
    printf("\nStack Overflow\n");
    return ;
}
printf(" Element : %d is pushed",item); 
tmp->data = item;
tmp->next = top;
top = tmp;
}
int pop(){
    Node *tmp;
    int item;
    if (isEmpty())
    {
       printf("Stack Underflow");
       exit(1);
    }
    tmp = top;
     item = tmp->data;
     top = top->next;
     free(tmp);
     return item;
}
int peek(){
    if (isEmpty())
    {
          printf("\nStack Underflow\n");
          return 0;
    }
    return top->data;
}
 int isEmpty(){
    if (top==NULL)
    {
        return 1;
    } 
    else
    return 0;
}
void display(){
    Node *ptr  = top;
    if (isEmpty())
    {
       printf("Stack is Empty");    
       return ;
    }
    printf("Stack Elements:\n");
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
  
}
