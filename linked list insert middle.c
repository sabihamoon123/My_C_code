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
struct node*insertAtFirst(struct node*head ,int data) {
        struct node*ptr = (struct node*)malloc(sizeof(struct node)) ;
        ptr->next=head ;
        ptr->data=data ;
        return ptr ;
}

struct node*insertAtbetween(struct node*head ,int data, int index) {
        struct node*ptr = (struct node*)malloc(sizeof(struct node)) ;
       struct node*p=head ;
         int i=0 ;
         while(i!=index-1){
            p=p->next ;
            i++ ;
         }
         ptr->data=data ;
         ptr->next=p->next ;
         p->next=ptr ;
         return head ;
};
    int main(){
     struct node*head ;
     struct node*second ;
     struct node*third ;

     head = (struct node*) malloc(sizeof(struct node)) ;
     second = (struct node*) malloc(sizeof(struct node)) ;
     third = (struct node*) malloc(sizeof(struct node)) ;

     head->data=7 ;
     head->next=second ;

     second->data=11 ;
     second->next=third ;

     third->data=66 ;
     third->next=NULL ;

     linkedlistTraversal(head) ;
    head = insertAtbetween(head, 56, 1) ;
    linkedlistTraversal(head) ;



return 0 ;
}

