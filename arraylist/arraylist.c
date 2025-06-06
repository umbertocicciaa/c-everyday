#include "arraylist.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>

arraylist_T* arraylist_alloc(unsigned int capacity){
  arraylist_T* array_list = malloc(sizeof(arraylist_T));
  array_list->items = malloc(sizeof(ARRAYLIST_TYPE)*capacity);
  array_list->capacity = capacity;
  array_list->size = 0;
  return array_list;
}
void arraylist_free(arraylist_T* array){
  free(array->items);
  free(array);
  array = NULL;
}

void arraylist_insert(arraylist_T* array, ARRAYLIST_TYPE element){
  if(array->size == array->capacity){
    array->capacity *= 2;
    array->items = realloc(array->items, sizeof(ARRAYLIST_TYPE) * array->capacity);
  }
  array->items[array->size]=element;
  array->size++;  
}
void arraylist_remove(arraylist_T* array, ARRAYLIST_TYPE element){
  if(arraylist_is_empty(array) || arraylist_find(array,element)==false)
    return;
  for(unsigned int i=0; i< array->capacity; i++){
    if(array->items[i]==element)
      for(unsigned int j=i+1;j<array->capacity;j++){
        array->items[j-1]=array->items[j];
	array->items[j]=-1;
      }
  }
  array->size--;
}

bool arraylist_is_empty(arraylist_T* array){
  return array->size==0;
}
bool arraylist_find(arraylist_T* array, ARRAYLIST_TYPE element){
  for(unsigned int i=0; i< array->capacity; i++)
    if(array->items[i]==element)
      return true;
  return false;
}

void arraylist_print(arraylist_T* array){
  for (unsigned int i = 0; i < array->size; i++){
     printf("%d ", array->items[i]);
  }
  printf("\n");
}
