#include <stddef.h>
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

stack_T *stack_alloc(int capacity)
{
    // if you don't allocate memory for the stack, the scope of the stack will be limited to this function
    stack_T *stack = malloc(sizeof(stack_T));
    stack->capacity = capacity;
    stack->count = 0;
    stack->items = malloc(sizeof(STACK_TYPE) * capacity);
    return stack;
}

void stack_free(stack_T *stack)
{
    free(stack->items);
    free(stack);
    stack = NULL; // set the pointer to NULL to avoid dangling pointer
}

void stack_push(stack_T *stack, STACK_TYPE item)
{
    if (stack->count == stack->capacity)
    {
        stack->capacity *= 2;
        stack->items = realloc(stack->items, sizeof(STACK_TYPE) * stack->capacity);
    }
    stack->items[stack->count] = item;
    stack->count++;
}

STACK_TYPE stack_pop(stack_T *stack)
{
    if (stack_is_empty(stack))
    {
        return -1; // stack is empty
    }
    stack->count--;
    return stack->items[stack->count];
}

void stack_print(stack_T *stack)
{
    for (unsigned int i = 0; i < stack->count; i++)
    {
        printf("%d ", stack->items[i]);
    }
    printf("\n");
}

bool stack_is_empty(stack_T *stack)
{
    return stack->count == 0;
}
