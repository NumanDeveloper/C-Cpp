#include <stdio.h>
#include <ctype.h>

char stack[20];
int top = -1;

void push(char val);
char pop();
int priority(char op);
int main(){
    char x, infix[20];
    printf("Enter infix: ");
    scanf("%s", &infix);
    char *p = infix;

    while (*p != '\0')
    {
        if(isalnum(*p))
            printf("%c", *p);
        else if(*p == '(') 
            push('(');
        else if(*p == ')'){
            while(x = pop() != '(')
                printf("%c", x);
        }
        else{
            if(priority(stack[top]) >= priority(*p))
                printf("%c", pop());
            push(*p);
        }
    p++;
    }
    while(top != -1)
        printf("%c", pop());

    return 0;
}
void push(char val){
    stack[++top] = val;
}
char pop(){
    return stack[top--];
}
int priority(char op){
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
}