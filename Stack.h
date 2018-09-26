#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

struct Stack{
	struct Node *list;
	int (*pop)(struct Stack*);
	void (*push)(struct Stack*, int);
	void (*clean)(struct Stack*);
};

struct Stack *createStack();