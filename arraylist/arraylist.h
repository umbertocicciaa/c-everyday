#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include <stdbool.h>

typedef int ARRAYLIST_TYPE;

typedef struct arraylist{
  unsigned int size;
  unsigned int capacity;
  ARRAYLIST_TYPE* items;
}arraylist_T;

arraylist_T* arraylist_alloc(unsigned int capacity); 
void arraylist_free(arraylist_T* array);

void arraylist_insert(arraylist_T* array, ARRAYLIST_TYPE element);
void arraylist_remove(arraylist_T* array, ARRAYLIST_TYPE element);

bool arraylist_is_empty(arraylist_T* array);
bool arraylist_find(arraylist_T* array, ARRAYLIST_TYPE element);

#endif
