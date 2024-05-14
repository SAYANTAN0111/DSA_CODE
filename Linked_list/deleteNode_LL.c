#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1: Delete at fisrt node.....
struct Node * deleteAtFirst(struct Node *head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
return head;
}

// Case 2: Delete in between two nodes...
struct Node * deleteAtIndex(struct Node *head,  int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
   struct Node * q = p->next;
   p->next = q->next;
   free(q);
    return head;
}

// Case 3: Delete a node with a given position.....
struct Node * deleteAfterNode(struct Node * head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}

// Case 4: Delete at end.....
struct Node * deleteAtEnd(struct Node * head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = NULL;
    free(q);
    return head;
}


int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *six;
    struct Node *seven;
    struct Node *eight;
    struct Node *nine;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    six = (struct Node *)malloc(sizeof(struct Node));
    seven = (struct Node *)malloc(sizeof(struct Node));
    eight = (struct Node *)malloc(sizeof(struct Node));
    nine = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

     // Link third and fourth nodes
    fourth->data = 28;
    fourth->next = fifth;

     // Link third and fourth nodes
    fifth->data = 31;
    fifth->next = six;

     // Link third and fourth nodes
    six->data = 26;
    six->next = seven;

     // Link third and fourth nodes
    seven->data = 33;
    seven->next = eight;

     // Link third and fourth nodes
    eight->data = 39;
    eight->next = nine;

    // Terminate the list at the third node
    nine->data = 66;
    nine->next = NULL;

    printf("Linked list before deletion..\n");
    linkedListTraversal(head);

     head = deleteAtFirst(head);
     printf("\nDelete at first.\n");
    linkedListTraversal(head);

     head = deleteAtIndex(head, 1);
     printf("\nDelete in between two nodes.\n");
    linkedListTraversal(head);

  /*  head = deleteAfterNode(third);
    printf("\nDelete with a given position.\n");
    linkedListTraversal(head);
*/
     head = deleteAtEnd(head);
     printf("\nDelete at end.\n");
    linkedListTraversal(head);


    return 0;
}