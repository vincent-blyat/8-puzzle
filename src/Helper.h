/**
 *  Header file for Helper.c
 */

#ifndef HELPER_H

#include<stdio.h>

extern struct node;

#endif

/////////////////////////
// Function Prototypes //
/////////////////////////

extern Node* newNode(int d,int p);

extern int peek(Node** head);

extern void pop(Node** head);

extern void push(Node** head, int d, int p);

extern int isEmpty(Node** head);
