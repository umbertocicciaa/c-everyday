#include "queue.h"
#include <stdio.h>

int main(void){
    queue_T* que=queue_alloc(3);
    enqueue(que, 1);
    enqueue(que, 2);
    enqueue(que, 3);
    queue_print(que);
    printf("\n");

    printf("Dequeue: %d\n", dequeue(que));
    queue_print(que);
    printf("\n");
    printf("Dequeue: %d\n", dequeue(que));
    queue_print(que);
    printf("\n");
    printf("Dequeue: %d\n", dequeue(que));
    queue_print(que);
    printf("\n");

    if(queue_is_empty(que)){
        printf("Queue is empty\n");
    } else {
        printf("Queue is not empty\n");
    }
    queue_free(que);
}