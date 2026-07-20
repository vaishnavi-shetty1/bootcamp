#include <stdio.h>

int q[100];
int front=-1,rear=-1;

void enqueue(int item)
{
    if (front==-1)
        front=0;
    q[++rear]=item;
};

void dequeue()
{
    if(front>rear)
        printf("queue empty");
    else
        printf("%d",q[front++]);
};

void display()
{
    for(int i=rear;i<=front;i++)
        printf("|%d|\n",q[i]);   
};

void main()
{
    enqueue(7);
    enqueue(8);
    dequeue();
    dequeue();
    display();
}