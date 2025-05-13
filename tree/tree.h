#ifndef TREE_H
#define TREE_H
#include <stdbool.h>

typedef int TREE_TYPE;

typedef struct tree{
  TREE_TYPE item;
  struct tree_T* left;
  struct tree_T* right;
}tree_T;

void pre_order(tree_T* tree);
void in_order(tree_T* tree);
void post_order(tree_T* tree);
void breadth_first(tree_T* tree);

bool tree_is_empty(tree_T* tree);

tree_T* tree_insert(tree_T* tree, TREE_TYPE element);
void tree_remove(tree_T* tree, TREE_TYPE element);

#endif
