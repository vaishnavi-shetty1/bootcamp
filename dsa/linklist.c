#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node *top;

void push(int value)
{
    struct Node *newNode;
    newNode=(struct Node *)malloc (sizeof(struct  Node));
    if (newNode == NULL)
    {
        printf("Stack Overflow\n");
        return;
    }
    newNode->data=value;
    newNode->next=top;
    top=newNode;

    printf("%d inserted\n",value);
};

void pop(){
    if (top==NULL){
        printf("stack underflow");
        return;
    }
    int value=top->data;
    top=top->next;
    printf("%d popped",value);

};

void display(){
    struct Node *newNode;
    struct Node *temp=top;

    while (top != NULL)
    {
        printf("|%d|\n",temp->data);
        temp=temp->next;
    }
    printf("|%d|\n",temp->data);
};

int main()
{
    push(5);
    push(19);
    push(20);
    pop();
    pop();
    display();
    return 0;
}