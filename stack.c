#include <stdio.h>

#define size 5
int stack [size];
int top =-1;

void push()
{
    int num;
    for(int i=0 ; i<size; i++)
    {
    printf("enter the num you want to stack ");
    scanf("%d",&num);
    }
    for(int i =0; i<size; i++)
    {
    printf("stack is %d\n ",num);
    }
    if(top == size-1)
    {
        printf("overflow");
    }else
    {
       top++;
        stack[top] =num;
    }
    
}

void pop()
{
    int item;
   
    if(top == -1)
    {
        printf("\n stack is underflow");
    }else
    {
        item = stack[top];
        top--;
    }

    printf("\npop is %d",item);
}

void peek()
{
    if(top == -1)
    {
        printf("\n underflow");
    }else
    {
        printf("\n top elemtn %d ",stack[top]);
    }
}

void main()
{
    push();
    pop();
    peek();


}