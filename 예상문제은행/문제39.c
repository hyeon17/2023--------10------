#include <stdio.h>
#define MAX 5
char Stack[MAX];
int Top = -1;
push(int i) {
	Top++;
	if (Top >= MAX)
		printf("overflow\n");
	else
		Stack[Top] = i;
}
pop() {
	if (Top < 0)
		printf("underflow\n");
	else
		printf("%c제거\n", Stack[Top--]);
}
main() {
	push('A');
	push('B');
	push('C');
	push('D');
	push('F');
	pop();
	pop();
	push('G');
	push('H');
	pop();
	pop();
}