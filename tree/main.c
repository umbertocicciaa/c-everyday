#include "tree.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
  tree_T* tree=NULL;	
  tree=tree_insert(tree, 1);
  tree=tree_insert(tree, 2);
  tree=tree_insert(tree, -1);

  printf("In order\n");
  in_order(tree); 
  printf("Pre order\n"); 
  pre_order(tree);
  printf("Post order\n");
  post_order(tree);
  
  return 0;
}
