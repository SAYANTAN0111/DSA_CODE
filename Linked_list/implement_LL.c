#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node*next;
    };
struct node*head,*newnode,*temp;
head=0;
int ch;
while (ch)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if (head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    printf("Do you want to continue(0,1)?\n");
    scanf("%d",&ch);
}
temp=head;
printf("The data are: ");
while (temp!=0)
{
    printf("%d ",temp->data);
    temp=temp->next;
}

}