#ifndef TREE_H
#define TREE_H
#include <stdbool.h>

typedef int TREE_TYPE;

typedef struct tree{
  TREE_TYPE item;
  tree_T* left;
  tree_T* right;
}tree_T;

void pre_order(tree_T* tree);
void in_order(tree_T* tree);
void post_order(tree_T* tree);
void breadth-first(tree_T* tree);

bool tree_is_empty(tree_T* tree);

tree_T* alloc_tree();
tree_T* free_tree();

#endif
