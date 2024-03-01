#include<stdio.h>
#include<stdlib.h>
struct queue //structure for queue
{
int size;
int f, j;
int r;                     // Sabiha Mahjabin Moon-221002236
int* arr;
};
int isFull(struct queue *q){ //checking the queue is empty or not
if(q->r==q->size-1){
return 1;
}
return 0;
}
int isEmpty(struct queue *q){
if(q->r==q->f){
return 1;
}
return 0;
}                                    //Sabiha Mahjabin Moon-221002236
void enqueue(struct queue *q, int val){
if(isFull(q)){
printf("This Queue is full\n");
}
else{
q->r++;
q->arr[q->r] = val;
}
}                                     //Sabiha Mahjabin Moon-221002236
int dequeue(struct queue *q){
int a = -1;
if(isEmpty(q)){
printf("This Queue is empty\n");
}
else{
q->f++;
a = q->arr[q->f];
}
return a;
}                                    //Sabiha Mahjabin Moon-221002236
int main(){
struct queue q;
q.size = 400;
q.f = q.r = 0;
q.arr = (int*) malloc(q.size*sizeof(int));
int node;
int i = 0; //source node
int visited[7] = {0,0,0,0,0,0,0};
int a [7][7] = {
{0,1,1,1,0,0,0},
{1,0,1,0,0,0,0},
{1,1,0,1,1,0,0},
{1,0,1,0,1,0,0},
{0,0,1,1,0,1,1},
{0,0,0,0,1,0,0},
{0,0,0,0,1,0,0}
};
printf("Visited-> %d\n", i);           // Sabiha Mahjabin Moon-221002236
visited[i] = 1;
enqueue(&q, i);
while (!isEmpty(&q))
{
int node = dequeue(&q), j;
for ( j = 0; j < 7; j++)
{
if(a[node][j] ==1 && visited[j] == 0){
printf("Visited-> %d\n", j);
visited[j] = 1;
enqueue(&q, j);                        //Sabiha Mahjabin Moon-221002236
}
}
}
return 0;
}
