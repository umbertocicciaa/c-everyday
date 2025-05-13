#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

queue_T* queue_alloc(int capacity){
  queue_T *queue = malloc(sizeof(queue_T));
  queue->capacity=capacity;
  queue->bot=0;
  queue->top=0;
  queue->items=malloc(sizeof(QUEUE_TYPE)*capacity);
}

void queue_free(queue_T* stack){
  free(stack->items);
  free(stack);
  stack = NULL;
}

void enqueue(queue_T* queue, QUEUE_TYPE item){
  
}

QUEUE_TYPE dequeue(queue_T* queue){
  
}

void queue_print(queue_T* queue){
  for(unsigned int i=0; i < queue->capacity; ++i){
    printf("%d ", stack->items[i]);
  }
  printf("\n");
}

bool queue_is_empty(queue_T* queue){
  return queue->count==0;
}
