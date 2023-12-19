#include <stdio.h>
#include <stdlib.h>

struct Stack {
	int data[100];
	int top;
};

int isfull(struct Stack *stk){
   if(stk->top == 100)
      return 1;
   else
      return 0;
}

void push(struct Stack *stk, int k) {
	if (!isfull(stk)) {
		stk->data[stk->top] = k;
		stk->top++;
	} else {
		printf("Stack is full\n");
	}
}

int pop(struct Stack *stk) {
	int k;
	if (stk->top > 0) {
		stk->top--;
		k = stk->data[stk->top];
		return k;
	} else {
		printf("Stack is empty\n");
	}
}

int TopElement(struct Stack *stk) {
	if (stk->top > 0) {
		return stk->data[stk->top-1];
	} else {
		printf("Stack is empty");
		return 0;
	}
}

void PrintStack(struct Stack *stk) {
	int n;
	n = stk->top;
	while (n > 0) {
		n--;
		printf("%d\n", stk->data[n]);
	}
}


int main() {
	struct Stack *stk;
	int n = 5;
	int k;
	stk = (struct Stack*)malloc(sizeof(struct Stack));

	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		push(stk, k);
	}
	pop(stk);
	PrintStack(stk);
	return 0;
}
