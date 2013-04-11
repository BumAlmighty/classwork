#ifndef __GIGLIO_PROJ2_1_H__
#define __GIGLIO_PROJ2_1_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>

// structure defining what a "node" is
typedef struct node {
  struct node *next;
  struct node *prev;
  void *val;
} node_t;

// structure to control a list of nodes
typedef struct {
  node_t *curr;
  unsigned int len;
  void (*free)(void *val);
} node_list_t;

node_t *new_node(void *);              // create a new node
node_list_t *new_node_list(void);      // create a new node list
void destroy_node_list(node_list_t *); // destroy a node list

#ifdef __cplusplus
}
#endif

#endif /* __GIGLIO_PROJ2_1_H__ */

