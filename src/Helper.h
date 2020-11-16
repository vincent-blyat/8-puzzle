/**
 * ++++++++++++++++++++++++++++++++++++++++++++++++++
 *  Helper.h
 *  Al Vincent Musa BSCS3B Artificial Intelligence
 *  Header file for Helper.c
 *  +++++++++++++++++++++++++++++++++++++++++++++++++
 */

#ifndef HELPER_H

#include<stdio.h>

extern struct queueNode;

#endif

/////////////////////////
// Function Prototypes //
/////////////////////////

extern QueueNode* newQueueNode(int d,int p);

extern int peek(QueueNode** head);

extern void pop(QueueNode** head);

extern void push(QueueNode** head, int d, int p);

extern int isEmpty(QueueNode** head);
