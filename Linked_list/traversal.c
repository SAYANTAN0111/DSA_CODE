#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};

void linklistTravesral(struct node*ptr)
{
    while (ptr!= NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
    }
    
}
int main()
{
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;

    //Alocate memory for nodes in the linklist in heap
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    
    //link first & second nodes
    head->data=7;
    head->next=second;

    //link second & third nodes
    second->data=10;
    second->next=third;

    //link third & fourth nodes
    third->data=13;
    third->next=fourth;

    //link third & fourth nodes
    fourth->data=45;
    fourth->next=NULL;

    linklistTravesral(head);
    return 0;
}