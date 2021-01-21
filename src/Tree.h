/** 
 *	@file Tree.h
 *  @author Al Vincent Musa
 *
 */

#ifndef TREE_H
#define TREE_H

#include "State.h"

struct Tree_Node {
    
    State state;
    Tree_Node* child[4];

};
#endif
