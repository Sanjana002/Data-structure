#include <stdio.h>
#define MAX 30
int stack[MAX],i,j,choice=0,top=-1;
void push();
void pop();
void show();
int main ()
{

    //printf("Enter the number of elements in the stack ");
    //scanf("%d",&n);
    printf("*********Stack operations using array*********");

printf("\n----------------------------------------------\n");
    while(choice != 4)
    {
        printf("\nChoose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\n Enter your choice\n");
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
            case 1:
            {
                push();
                 break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                show();
                break;
            }
            case 4:
            {
                printf("\nExiting....\n");
                break;
            }
            default:
            {
                printf("\nPlease Enter valid choice \n");
            }
        }
    }
    return 0;
}

void push ()
{
    int val;
    if (top == MAX-1 )
    printf("\n Overflow\n");
    else
    {
        printf("\nEnter the value : ");
        scanf("%d",&val);
        top = top +1;
        stack[top] = val;
        printf("\n Element inserted\n");
    }
}

void pop ()
{
    if(top == -1)
       printf("\nUnderflow\n");
    else
    {
       top = top -1;
       printf("\n 1 element popped\n");
    }
}
void show()
{
    if(top == -1)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        printf("\nPrinting values.....\n");
        for (i=top;i>=0;i--)
        {
             printf("%d\n",stack[i]);
        }
    }
}
