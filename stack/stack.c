#include "stack.h"

int main()
{
    float a,b,action,result;
    stack_s Stack;
    createStack(Stack, 4);
    printf("Write first number \n");
    a = getchar();
    Stack.stack_push(a);
    printf("Write second number \n");
    b = getchar();
    Stack.stack_push(b);
    printf("Choose an action");
    action = getchar();
    Stack.stack_push(action);
    for(int i=0;i<=4;i++)
    {
        Stack[i]
    }
}
