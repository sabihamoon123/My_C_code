#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;                  //Sabiha Mahjabin Moon--ID-221002236
} *head = NULL;

void insertAtFirst(int data)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    if (head == NULL)
    {
        newnode->next = NULL;           //Sabiha Mahjabin Moon--ID-221002236
        head = newnode;
    }
    else
    {
        newnode->next = head;           //Sabiha Mahjabin Moon--ID-221002236
        head = newnode;
    }
    printf("\nOne node inserted ...\n");
}

void insertAtlast(int data)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;              //Sabiha Mahjabin Moon--ID-221002236
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)      //Sabiha Mahjabin Moon--ID-221002236
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    printf("\nOne node inserted ....\n");
}

void deleteAtFirst()
{
    if (head == NULL)
    {
        printf("\nList is Empty\n");    //Sabiha Mahjabin Moon--ID-221002236
    }
    else
    {
        struct node *temp = head;
        head = head ->next;             //Sabiha Mahjabin Moon--ID-221002236
        temp->next = NULL;
    }
    printf("\nOne node deleted ...\n");
}

void deleteAtlast()
{
    if (head == NULL)
    {
        printf("\nList is Empty\n");    //Sabiha Mahjabin Moon--ID-221002236
    }
    else
    {
        struct node *temp = head;
        struct node *prev = NULL;
        while (temp->next != NULL)
        {
            prev = temp;                //Sabiha Mahjabin Moon--ID-221002236
            temp = temp->next;
        }
        prev->next = NULL;
    }
    printf("\nOne node deleted ...\n");
}

void display()
{
    if (head == NULL)
    {
        printf("\nList is Empty\n");    //Sabiha Mahjabin Moon--ID-221002236
    }
    else
    {
        struct node *temp = head;
        printf("\n\nList elements are - \n");

        while (temp->next != NULL)      //Sabiha Mahjabin Moon--ID-221002236
        {
            printf("%d--->", temp->data);
            temp = temp->next;
        }
        printf("%d--->NULL", temp->data);
    }
}

int main()
{
    int choice, value, choice1, loc1, loc2;
    while (1)
    {
    mainMenu:
        printf("\n\n****** MENU ******\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);           //Sabiha Mahjabin Moon--ID-221002236
        switch (choice)
        {
        case 1:
            printf("Enter the value to be insert: ");
            scanf("%d", &value);        //Sabiha Mahjabin Moon--ID-221002236
            while (1)
            {
                printf("Where you want to insert: \n1. At First\n2. At last\nEnter your choice: ");

                scanf("%d", &choice1);

                switch (choice1)        //Sabiha Mahjabin Moon--ID-221002236
                {
                case 1:
                    insertAtFirst(value);
                    break;
                case 2:                 //Sabiha Mahjabin Moon--ID-221002236
                    insertAtlast(value);
                    break;
                default:
                    printf("\nWrong Input!! Try again!!!\n\n");
                    goto mainMenu;
                }                       //Sabiha Mahjabin Moon--ID-221002236
                goto subMenuEnd1;
            }
        subMenuEnd1:
            break;
        case 2:
            while (1)
            {
                printf("Where you want to delete: \n1. At First\n2. At last\nEnter your choice: ");

                scanf("%d", &choice1);

                switch (choice1)
                {
                case 1:
                    deleteAtFirst();    //Sabiha Mahjabin Moon--ID-221002236
                    break;

                case 2:
                    deleteAtlast();          //Sabiha Mahjabin Moon--ID-221002236
                    break;
                default:
                    printf("\nWrong Input!! Try again!!!\n\n");
                    goto mainMenu;
                }
                goto subMenuEnd2;           //Sabiha Mahjabin Moon--ID-221002236
            }
        subMenuEnd2:
            break;
        case 3:
            display();                      //Sabiha Mahjabin Moon--ID-221002236
            break;
        case 4:
            exit(0);                        //Sabiha Mahjabin Moon--ID-221002236
        default:
            printf("\nWrong input!!! Try again!!\n\n");
        }
    }
    return 0;
}
