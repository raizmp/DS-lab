#include<stdio.h>
#include<stdlib.h>
#define N 10
void create();
void enqueue();
void dequeue();
void display();
int q[N],rear=-1,front=-1,n,i;
int main()
{
    int ch;
    do
    {
        printf(" \n1.Insert \n2.Delete \n3.Display \n4.Exit");
        printf("\nEnter your choice");
        scanf("%d",&ch);
        switch(ch)
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
            exit(0);
            break;
        }
    }while(ch!=0);
}
void enqueue()
{    int x;
    printf("enter the element:");
    scanf("%d",&x);
    if(front==-1&&rear==-1)
    {
        front=rear=0;
        q[rear]=x;
    }
    else if((rear+1)%N==front)
    {
        printf("overflow");
    }
    else
    {
        rear=(rear+1)%N;
        q[rear]=x;
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
    {
        printf("queue is underflow");
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front=(front+1)%N;
    }
}
void display()
{
    int i=front;
    if(front==-1&&rear==-1)
    {
        printf("\n queue is empty");
    }
    else
    {
        printf("\n elements of queue are:");
        while(i<=rear)
        {
            printf(" %d ",q[i]);
            i=(i+1)%N;
        }
    }
}
    




















    


