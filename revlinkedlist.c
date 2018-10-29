/*------------------------------------------------*/
/****** C Program to reverse the linked list ******/
/*------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
/*-----------------------------------------------*/
/******Function to insert a node in begining******/
/*-----------------------------------------------*/
void insert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *) malloc(sizeof(struct node *));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value : ");
        scanf("%d",&item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted");
    }

}
/*-------------------------------------------------------*/
/******Function to print the elements in linked list******/
/*-------------------------------------------------------*/
void display()
{
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\nprinting values . . . . .\n");
        while (ptr!=NULL)
        {
            printf("\n%d",ptr->data);
            ptr = ptr -> next;
        }
    }
}
/*---------------------------------------------------*/
/******Function to reverse the given linked list******/
/*---------------------------------------------------*/
void reverse()
{
    struct node *current, *prev, *temp;
    current=head;
    prev=NULL;
    if(head==NULL)
    {
        printf("\nList is empty\n");
        return;
    }
    while(current!=NULL)
    {
        temp=current->next;
        current->next=prev;
        prev=current;
        current=temp;
    }
    head=prev;
    printf("\nList reversed");
}
/*----------------------------------------------------*/
/******Driver program to test the above functions******/
/*----------------------------------------------------*/
int main ()
{
    int choice =0;
    while(choice != 4)
    {
        printf("\n\n*********Main Menu*********\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("\n1.Insert in list\n2.display the list\n3.reverse the list\n4.exit\n\n");
        printf("\nEnter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                   insert();
                   break;
            case 2:
                   display();
                   break;
            case 3:
                   reverse();
                   break;
            case 4:
                   exit(0);
                   break;
            default:
                   printf("\nEnter the valid choice");
        }
    }
}
