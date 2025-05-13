#include "arraylist.h"
#include <stdio.h>

int main(){
  arraylist_T* array = arraylist_alloc(3);
  arraylist_insert(array, 10);
  arraylist_insert(array, 2);
  arraylist_insert(array, 1);
  arraylist_print(array);

  printf("is present 2: %d\n", arraylist_find(array,2));

  arraylist_remove(array, 2);
  arraylist_remove(array, 1);
  arraylist_remove(array, 10);
  arraylist_print(array);
  

  return 0;
}
