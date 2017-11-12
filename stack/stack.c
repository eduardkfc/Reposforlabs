#include "stack.h"

int main()
{
    int a,b,c,d,result;
    char action;
    stack_s Stack;
    createStack(&Stack, 3);
    a = getchar();
    stack_push(&Stack,&a);
    b = getchar();
    stack_push(&Stack,&b);
    action = getchar();
    stack_push(&Stack,&action);
    c = stack_pop(&Stack);
    d = stack_pop(&Stack);
    action = stack_pop(&Stack);
    if(action == '+') { result = c + d; }
    else if(action == '-') { result = c - d; }
    else if(action == '/') { result = c / d; }
    else if(action == '*') { result = c * d; }
    printf("%i",result);
}
