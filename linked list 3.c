#include<stdio.h>
#include<stdlib.h>

struct node
{
    int value;
    struct node *next;
};
struct node *newnode, *head = NULL,*temp;
int create()
{
    int num = 1;
    while(num)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter node value:\n");
        scanf("%d",&newnode->value);
        newnode->next = NULL;
        if (head ==NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }

        printf("Do you create another node press one\n\nElse press any num without 1\n ");
       scanf("%d",&num);
       if(num>1){
           return 0;
       }
    }
}

void display()
{
    if (head == NULL)
    {
        printf("linked list is not created: \n");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("%d ",temp->value);
            temp = temp->next;
        }
    }
}

void sort()
{
    struct node *i,*j;
    int num;
    for(i= head; i->next != NULL; i=i->next)
    {
        for(j=i->next ; j!= NULL; j=j->next)
        {
            if(i->value > j->value)
            {
                num = j->value;
                j->value = i->value;
                i->value = num;
            }
        }
    }
}
int main()
{
    create();
    display();
    sort();
    printf("\nsorting of linked list\n");
    display();
    return 0;
}
