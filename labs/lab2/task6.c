#include <stdio.h>
#include <stdlib.h>

struct Stack {
	int data[100];
	int top;
};

void push(struct Stack *stk, int k) {
	if (stk->top < 100) {
		stk->data[stk->top] = k;
		stk->top++;
	} else {
		printf("STACK_OVERFLOW");
	}
}

int pop(struct Stack *stk) {
	int k;
	if (stk->top > 0) {
		stk->top--;
		k = stk->data[stk->top];
		return k;
	} else {
		printf("STACK_UNDERFLOW");
		return 0;
	}
}

int TopElement(struct Stack *stk) {
	if (stk->top > 0) {
		return stk->data[stk->top-1];
	} else {
		printf("STACK_UNDERFLOW");
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


int main(int argc, char *argv[]) {
	struct Stack *stk;
	int n = atoi(argv[1]);
	int k;
	stk = (struct Stack*)malloc(sizeof(struct Stack));

	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		push(stk, k);
	}

	PrintStack(stk);
	printf("%d\n", TopElement(stk));

	return 0;
}
