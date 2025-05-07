#ifndef STACK_H
#define STACK_H
#include <stdbool.h>

typedef int STACK_TYPE;

typedef struct stack {
    unsigned int count;
    unsigned int capacity;
    STACK_TYPE* items;
} stack_T;

stack_T* stack_alloc(int capacity);
void stack_free(stack_T* stack);


void stack_push(stack_T* stack, STACK_TYPE item);
int stack_pop(stack_T* stack);

void stack_print(stack_T* stack);
bool stack_is_empty(stack_T* stack);

# endif
