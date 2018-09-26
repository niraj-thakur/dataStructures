#include "Stack.h"

void push(struct Stack *this, int val){
	struct Node *t = (struct Node*)malloc(sizeof(struct Node));
	if(t == NULL){
		printf("Stack overflow!!\n");
		return;
	}
	t->data = val;
	
	t->next = this->list;
	this->list = t;
	printf("Pushing the %d\n",val);
	
}

int pop(struct Stack *this){
	if(this->list){
		int temp = this->list->data;
		struct Node *t = this->list;
		this->list = this->list->next;
		free(t);
		printf("Popping the %d\n",temp);
		return temp;
	}else{
		printf("Stack is empty\n");
	}
}

void clean(struct Stack *this){
	//clearing list
	struct Node *t = NULL;
	while(this->list){
		 t = this->list;
		 printf("Cleaning the %d\n",t->data);
		 this->list = this->list->next;
		 free(t);
	}
	free(this);
}

struct Stack *createStack(){
	struct Node *list = NULL;
	struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->list = list;
	stack->clean = &clean;
	stack->pop = &pop;
	stack->push = &push;
	return stack;
}
