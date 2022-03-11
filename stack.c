#include <stdio.h>

int stack[20];
int top = -1;

void push(int val);
void pop();
void display();
int main()
{
    printf("Stack created");
    push(34);
    push(22);
    push(4);
    push(52);
    display();
    pop();
    pop();
    display();
    return 0;
}
void push(int val){
    stack[++top] = val;
}
void pop(){
    printf("%d popped from the stack.\n", stack[top]);
    stack[top--];
}
void display(){
    printf("\nStack: ");
    for(int i = 0; i<=top; i++)
        printf("%d ", stack[i]);
    printf("\n");
}