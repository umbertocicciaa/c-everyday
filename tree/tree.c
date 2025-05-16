#include "tree.h"
#include <stdlib.h>
#include <stdio.h>

void pre_order(tree_T *tree){
}

void in_order(tree_T *tree){
  if(tree!=NULL){
    in_order(tree->left);
    printf("Element %d", tree->item);
    in_order(tree->right);
  }
}

void post_order(tree_T *tree){
}

void breadth_first(tree_T *tree){
}

bool tree_is_empty(tree_T *tree){
}

tree_T *tree_insert(tree_T *tree, TREE_TYPE element){
  if(tree == NULL){
    tree = malloc(sizeof(tree_T));
    tree->item = element;
    return tree;
  }
  if(tree->item > element){
    tree->left=tree_insert(tree->left, element);
  }
  else if (tree->item < element){
    tree->right=tree_insert(tree->right, element);
  }
  return tree;
}
void tree_remove(tree_T *tree, TREE_TYPE element){
}
