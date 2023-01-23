#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedlisttraversal(struct Node *head){
    struct Node *ptr = head;
    do{
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}

struct Node * insertAtfirst(struct Node * head, int data){
   struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
   ptr->data = data;

   struct Node * p = head->next;
   while(p->next != head){
    p = p->next;
   }

//At this point p points to the last node of this circular linked linkedlisttraversal

   p->next = ptr;
   ptr->next = head;
   head = ptr;
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
     fourth->next = head;

     
     printf("Linked list before insertion :");
     linkedlisttraversal(head);
     head= insertAtfirst(head,56);
     //head = insertAtindex(head, 56, 1);
     //head = insertAtend(head, 56);
     //head = insertAfterNode(head, second, 45);
     printf("Linked list after insertion :");
     linkedlisttraversal(head);


     return 0;
}     