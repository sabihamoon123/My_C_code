#include<stdio.h>
#include<stdbool.h> //Sabiha Mahjabin Moon-221002236
#define capacity 5
int arr_que[capacity], front = 0, rear = -1, totalItem = 0,  i;
bool isFull(){
if (totalItem==capacity) return true;
else return false;
}
bool isEmpty(){
if(totalItem==0) return true;   //Sabiha Mahjabin Moon-221002236
else return false;
}
void enqueue(int item){
if(isFull()){
printf("\nThe Queue is Full\n");
return;
}
else
{
rear =(rear+1)%capacity;
arr_que[rear]=item;         //Sabiha Mahjabin Moon-221002236
totalItem++;
return;
}
}
void dequeue(){
if(isEmpty()){
printf("\nThe Queue is Empty\n");
return;
}
else
{
front = (front+1)%capacity;    //Sabiha Mahjabin Moon-221002236
totalItem--;
return;
}
}
void show(){
printf("\nThe Queue is : ");
for (i = 0;i < capacity;i++)
{
printf("\t%d", arr_que[i]);
}
return;                    //Sabiha Mahjabin Moon-221002236
}
int main(){
dequeue(); // to remove an item from empty queue
show(); //to show empty queue
enqueue(30); //to add two items to the queue
enqueue(45);
show(); //to show enqueued items
enqueue(30); //to add three more items to the queue
enqueue(45);
enqueue(55);
show(); //to show filled queue
enqueue(60);
dequeue();
enqueue(80);             //Sabiha Mahjabin Moon-221002236
show();
return 0;
}

