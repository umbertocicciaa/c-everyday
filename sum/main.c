#include <stdio.h>
#include <stdlib.h>
#include "sum.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int result = sum(a, b);
    printf("The sum of %d and %d is %d\n", a, b, result);
    return 0;
}