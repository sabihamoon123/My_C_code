
#include<stdio.h>
#include<stdlib.h>
struct node{
  int data ;
  struct node*next ;

};
void linkedlistTraversal(struct node*ptr)
{
    while(ptr != NULL)
    {
        printf("\nthe element:") ;
        printf("%d",ptr->data) ;
        ptr = ptr->next ;
    }
}

struct node*deleteFirst(struct node*head ) {
        struct node*ptr = head ;
        head=head->next ;
        free(ptr) ;
        return head ;

};

struct node*deleteindex(struct node*head, int index ) {
        struct node*p = head ;
        struct node*q = head->next ;
        int i;
        for( i=0;i<index-1;i++){
            p=p->next ;
            q=q->next ;
            }

            p->next=q->next ;
        free(q) ;
        return head ;

};

struct node*deleteLast(struct node*head ) {
        struct node*p = head ;
        struct node*q = head->next ;
        int i;
        while(q->next!=NULL){

            p=p->next ;
            q=q->next ;
            }

            p->next=NULL ;
        free(q) ;
        return head ;

};

    int main(){
     struct node*head ;
     struct node*second ;
     struct node*third ;
     struct node*fourth ;

     head = (struct node*) malloc(sizeof(struct node)) ;
     second = (struct node*) malloc(sizeof(struct node)) ;
     third = (struct node*) malloc(sizeof(struct node)) ;
     fourth = (struct node*) malloc(sizeof(struct node)) ;

     head->data=7 ;
     head->next=second ;

     second->data=11 ;
     second->next=third ;

     third->data=66 ;
     third->next=fourth ;

     fourth->data=72 ;
     fourth->next=NULL ;

     printf("linked list before deletion:\n") ;
     linkedlistTraversal(head) ;
    // head = deleteFirst(head) ;
   // head = deleteindex(head, 2) ;
   head = deleteLast(head) ;
    printf("\nlinked list after deletion:\n") ;
    linkedlistTraversal(head) ;



return 0 ;
}
