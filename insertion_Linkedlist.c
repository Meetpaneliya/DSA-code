#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedlisttraversal(struct Node *ptr){
    while(ptr!=NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//case-1:
struct Node * insertAtfirst(struct Node * head, int data){
struct Node * ptr = (struct Node*)malloc(sizeof(struct Node)); 
ptr->next=head;
ptr->data=data;
}


//case-2: 
struct Node * insertAtindex(struct Node * head, int data, int index){
struct Node * ptr = (struct Node*)malloc(sizeof(struct Node)); 
struct Node * p = head;
int i=0;
 
    while(i != index-1){
         p = p->next;
         i++;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

//case-3:
struct Node * insertAtend(struct Node * head, int data){
struct Node * ptr = (struct Node*)malloc(sizeof(struct Node)); 
ptr->data=data;
struct Node * p =head;

   while (p->next!=NULL){
    p = p->next;
   }

   p->next = ptr;
   ptr->next = NULL;
   return head;
}

//case-4:
struct Node * insertAfterNode(struct Node * head, struct Node * prevNode, int data){
struct Node * ptr = (struct Node*)malloc(sizeof(struct Node)); 
ptr->data=data;

   ptr->next = prevNode->next;
   prevNode->next = ptr;

   return head;
}


int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

     //Allocate memory for the nodes in linklist in heap.
     head = (struct node *)malloc(sizeof(struct Node));
     second = (struct node *)malloc(sizeof(struct Node));
     third = (struct node *)malloc(sizeof(struct Node));
     fourth = (struct node *)malloc(sizeof(struct Node)); 

    //Link First and second node.
     head->data = 7;
     head->next = second;

    //Link second and third node.
     second->data = 11;
     second->next = third;

    //Link third and fourth node.
     third->data = 41;
     third->next = fourth;

    //terminant the list at the fourth node.
     fourth->data = 66;
     fourth->next = NULL;
   
     printf("Linked list before insertion :");
     linkedlisttraversal(head);
     //head= insertAtfirst(head,56);
     //head = insertAtindex(head, 56, 1);
     //head = insertAtend(head, 56);
     head = insertAfterNode(head, second, 45);
     printf("Linked list after insertion :");
     linkedlisttraversal(head);


     return 0;
}     

