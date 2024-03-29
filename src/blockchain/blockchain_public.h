#ifndef BLOCKCHAIN_PUBLIC_H
#define BLOCKCHAIN_PUBLIC_H

#include "node/node_public.h"
#include <stdbool.h>
#include <stddef.h>

Node *get_nodes(void);
bool has_node_with_id(unsigned int nid);
Node *get_node_from_id(unsigned int nid);
void add_node(Node *node);
void rmv_node(Node *node);
size_t get_num_nodes(void);
bool blockchain_is_synced(void);
int synchronize(void);
void update_sync_state(void);
void free_blockchain(void);

#endif
