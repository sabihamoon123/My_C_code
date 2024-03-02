// C program for Linked list insertion and deletion by Faysal Hossain Tomal (ID 221002220)
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;                  //Faysal Hossain Tomal (ID 221002220)
} *head = NULL;

void insertAtBeginning(int value)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    if (head == NULL)
    {
        newNode->next = NULL;           //Faysal Hossain Tomal (ID 221002220)
        head = newNode;
    }
    else
    {
        newNode->next = head;           //Faysal Hossain Tomal (ID 221002220)
        head = newNode;
    }
    printf("\nOne node inserted !!!!\n");
}

void insertAtEnd(int value)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;              //Faysal Hossain Tomal (ID 221002220)
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)      //Faysal Hossain Tomal (ID 221002220)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("\nOne node inserted !!!!!\n");
}

void deleteAtBeginning()
{
    if (head == NULL)
    {
        printf("\nList is Empty\n");    //Faysal Hossain Tomal (ID 221002220)
    }
    else
    {
        struct Node *temp = head;
        head = head ->next;             //Faysal Hossain Tomal (ID 221002220)
        temp->next = NULL;
    }
    printf("\nOne node deleted !!!!\n");
}

void deleteAtEnd()
{
    if (head == NULL)
    {
        printf("\nList is Empty\n");    //Faysal Hossain Tomal (ID 221002220)
    }
    else
    {
        struct Node *temp = head;
        struct Node *prev = NULL;
        while (temp->next != NULL)
        {
            prev = temp;                //Faysal Hossain Tomal (ID 221002220)
            temp = temp->next;
        }
        prev->next = NULL;
    }
    printf("\nOne node deleted !!!!\n");
}

void display()
{
    if (head == NULL)
    {
        printf("\nList is Empty\n");    //Faysal Hossain Tomal (ID 221002220)
    }
    else
    {
        struct Node *temp = head;
        printf("\n\nList elements are - \n");

        while (temp->next != NULL)      //Faysal Hossain Tomal (ID 221002220)
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
        scanf("%d", &choice);           //Faysal Hossain Tomal (ID 221002220)
        switch (choice)
        {
        case 1:
            printf("Enter the value to be insert: ");
            scanf("%d", &value);        //Faysal Hossain Tomal (ID 221002220)
            while (1)
            {
                printf("Where you want to insert: \n1. At Beginning\n2. At End\nEnter your choice: ");

                scanf("%d", &choice1);

                switch (choice1)        //Faysal Hossain Tomal (ID 221002220)
                {
                case 1:
                    insertAtBeginning(value);
                    break;
                case 2:                 //Faysal Hossain Tomal (ID 221002220)
                    insertAtEnd(value);
                    break;
                default:
                    printf("\nWrong Input!! Try again!!!\n\n");
                    goto mainMenu;
                }                       //Faysal Hossain Tomal (ID 221002220)
                goto subMenuEnd1;
            }
        subMenuEnd1:
            break;
        case 2:
            while (1)
            {
                printf("Where you want to delete: \n1. At Beginning\n2. At End\nEnter your choice: ");

                scanf("%d", &choice1);

                switch (choice1)
                {
                case 1:
                    deleteAtBeginning();    //Faysal Hossain Tomal (ID 221002220)
                    break;

                case 2:
                    deleteAtEnd();          //Faysal Hossain Tomal (ID 221002220)
                    break;
                default:
                    printf("\nWrong Input!! Try again!!!\n\n");
                    goto mainMenu;
                }
                goto subMenuEnd2;           //Faysal Hossain Tomal (ID 221002220)
            }
        subMenuEnd2:
            break;
        case 3:
            display();                      //Faysal Hossain Tomal (ID 221002220)
            break;
        case 4:
            exit(0);                        //Faysal Hossain Tomal (ID 221002220)
        default:
            printf("\nWrong input!!! Try again!!\n\n");
        }
    }
    return 0;                               //Faysal Hossain Tomal (ID 221002220)
}
