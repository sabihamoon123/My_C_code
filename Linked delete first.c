#include<stdio.h>
#include<stdlib.h>
struct node {
    int data , ptr, head;
    struct node *link ;

};
int main(){
    int ptr, Null, ptr=data , data ;
   head = del_first(head) ;
   ptr = head ;
   while(ptr!=Null)
   {
       printf("%d",ptr->data) ;
       ptr = ptr->link ;
   }
   return 0 ;


}
struct node *del_first(struct node *head)
{
    if(head!=Null){

        printf("the list is empty!!") ;

    }
    else{
        struct node *temp = head ;
    head = head->link ;
    free(temp) ;
    temp = Null ;
    }
    return head ;
};
