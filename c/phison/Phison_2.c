#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    char e;
    struct node *next;
} NODE;
typedef struct queue
{
    NODE *head;
    NODE *tail;
} QUEUE;
char init_queue(QUEUE *queue) //將隊列queue初始化
{
    queue->head = (NODE*)malloc(sizeof(NODE));
    queue->head->next = queue->tail;
    queue->tail->next = queue->head;
}
char enqueue(QUEUE *queue, char e)  //將元素e入隊列queue
{
    NODE* newnode;
    newnode = (NODE*)malloc(sizeof(NODE));
    newnode->e = e;
    queue->tail->next->next = newnode;
    queue->tail->next = newnode;
}
char dequeue(QUEUE *queue, char *e)  //從隊列queue中取出一個元素e， 並賦值給*e
{
    if(queue->head->next == queue->tail) {
        *e = ' ';
    }
    *e = queue->head->next->e;
    NODE* temp = queue->head;
    queue->head = queue->head->next;
    free(temp);
}
int main(){
    QUEUE q;
    init_queue(&q);
    enqueue(&q, 'a');
    enqueue(&q, 'b');
    enqueue(&q, 'c');
    char c;
    dequeue(&q, &c);
    printf("%c ", c);
    dequeue(&q, &c);
    printf("%c ", c);
    dequeue(&q, &c);
    printf("%c ", c);
    return 0;

}