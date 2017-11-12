#ifndef _STACK_H
#define _STACK_H

#include <stdio.h>
#include <stdlib.h>
typedef unsigned int stackElementT;
typedef int bool;
#define true 1;
#define false 0;

typedef struct stack_s
{
    unsigned int capacity;
    int size;
    unsigned int *elements;
}stack_s;

void createStack(stack_s *s, unsigned int maxElements)
{
    stackElementT *newContents;
    newContents = (stackElementT *)malloc(sizeof(stackElementT)*maxElements);
    /*initialize properties */
    if (s->elements == NULL)
    {
        fprintf(stderr, "Insufficient memory to initialize stack.\n");
        exit(1);
    }
    s->elements = newContents;
    s->capacity = maxElements;
    s->size = -1;
}

bool stackifempty(stack_s *s)
{
    if (s->size < 0)
        return 1;
    else return 0;
}
bool stackiffull(stack_s *s)
{
    if (s->size == s->capacity)
        return 1;
    else return 0;
}

void destroyStack(stack_s *s)
{
    free(s->elements);
    s->elements = NULL;
    s->capacity = 0;
}
int stack_pop(stack_s *s)
{
    if (stackifempty(s))
    {
        printf("Stack is empty");
        exit(1);
    }
    return s->elements[s->size];
    if (stackisempty(s) == 0) { s->size--; }
}

void stack_push(stack_s *s,stackElementT element)
{
    if (stackiffull(s))
    {
        printf("Can't push element on stack: stack is full");
        exit(1);
    }
    s->elements[++s->size] = element;
}
#endif