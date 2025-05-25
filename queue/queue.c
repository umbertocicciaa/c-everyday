#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

queue_T* queue_alloc(int capacity){
  queue_T *que=malloc(sizeof(queue_T));
  que->capacity=capacity;
  que->bot=0;
  que->top=-1;
  que->items=malloc(sizeof(QUEUE_TYPE)*capacity);
  return que;
}

void queue_free(queue_T* queue){
  free(queue->items);
  free(queue);
  queue = NULL;
}

void enqueue(queue_T* queue, QUEUE_TYPE item){
  if(queue->top>=queue->capacity -1){
    return;
  }
  queue->top=queue->top+1; 
  queue->items[queue->top]=item;    
}

QUEUE_TYPE dequeue(queue_T* queue){
  if(queue->top==-1){
    return -1;
  }
  QUEUE_TYPE result=queue->items[queue->bot];
  for(int i=0; i<queue->top; i++){
    queue->items[i]=queue->items[i+1];
  }
  queue->top=queue->top-1;  
  return result;
}

void queue_print(queue_T* queue){
  for(int i=0; i<=queue->top; i++){
    printf("%d, ", queue->items[i]);
  }
}

bool queue_is_empty(queue_T* queue){
  return queue->top==-1;
}
