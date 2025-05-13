#ifndef QUEUE_H
#define QUEUE_H
#include <stdbool.h>

typedef int QUEUE_TYPE;

typedef struct queue{
  unsigned int capacity;
  unsigned int bot;
  unsigned int top;
  STACK_TYPE* items;
}queue_T;

queue_T* queue_alloc(int capacity);
void queue_free(queue_T* stack);

void enqueue(queue_T* queue, QUEUE_TYPE item);
QUEUE_TYPE dequeue(queue_T* queue);

void queue_print(queue_T* queue);
bool queue_is_empty(queue_T* queue);

#endif
