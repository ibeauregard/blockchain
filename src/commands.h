#ifndef COMMANDS_H
#define COMMANDS_H

#include "utils/uint_array.h"
#include <stdbool.h>

typedef enum e_cmd { UNDEFINED, EMPTY, ADD_NODE, ADD_BLOCK, RM_NODE,
             RM_BLOCK, LS, SYNC, QUIT } MainCmd;

typedef struct s_command {
	MainCmd maincmd;
	bool lflag;
	bool all;
	unsigned int *nidlist;
	size_t nidcount;
	unsigned *bidlist;
	size_t bidcount;
} Command;

void free_cmd(Command *command);
void print_cmd(Command *command);
void print_prompt(void);
Command *get_cmd(void);
int load_blockchain(void);

int cmd_add_node(Command *command);
int cmd_add_block(Command *command);
int cmd_rm_node(Command *command);
int cmd_rm_block(Command *command);
void cmd_ls(Command *command);
int cmd_sync(void);
int cmd_quit(void);
void cmd_not_found(void);

#endif
