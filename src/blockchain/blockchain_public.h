#ifndef BLOCKCHAIN_PUBLIC_H
#define BLOCKCHAIN_PUBLIC_H

#include "node/node_public.h"
#include <stdbool.h>
#include <stddef.h>

Node *get_nodes();
bool has_node_with_id(unsigned int nid);
Node *get_node_from_id(unsigned int nid);
void add_node(Node *node);
void rmv_node(Node *node);
size_t get_num_nodes();
bool blockchain_is_synced();
int synchronize();
void free_blockchain();

#endif
