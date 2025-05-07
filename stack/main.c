#include "stack.h"
#include <stdio.h>

int main(){
    stack_T *stack = stack_alloc(10);
    stack_push(stack, 1);
    stack_push(stack, 2);
    stack_push(stack, 3);
    stack_print(stack);
    printf("Popped: %d\n", stack_pop(stack));
    stack_print(stack);
    stack_free(stack);
    return 0;
}