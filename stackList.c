#include<stdio.h>
#include "Stack.h"

int main(){
	printf("Making Stack\n");
	struct Stack *stack = createStack();
	stack->push(stack, 1);
	stack->push(stack, 2);
	stack->push(stack, 3);
	stack->pop(stack);
	stack->push(stack, 4);
	stack->clean(stack);
	return 0;
}
