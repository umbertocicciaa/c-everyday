#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

queue_T* queue_alloc(int capacity){
  queue_T *que = malloc(sizeof(queue_T));
  que->capacity=capacity;
  que->bot=0;
  que->top=0;
  que->items=malloc(sizeof(QUEUE_TYPE)*capacity);
  return que;
}

void queue_free(queue_T* queue){
  free(queue->items);
  free(queue);
  queue = NULL;
}

void enqueue(queue_T* queue, QUEUE_TYPE item){
  
}

QUEUE_TYPE dequeue(queue_T* queue){
  
}

void queue_print(queue_T* queue){
  
}

bool queue_is_empty(queue_T* queue){
  
}
