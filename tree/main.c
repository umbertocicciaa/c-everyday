#include "tree.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
  tree_T* tree=NULL;	
  tree=tree_insert(tree, 1);
  in_order(tree);  
  return 0;
}
