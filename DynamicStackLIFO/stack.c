#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

struct stack_item_t
{
    int value;
    struct stack_item_t *next;
};

struct stack_item_t *stack = NULL;

void show(void)
{
    if(is_empty())
    {
        printf("Stack is empty!\n");
    }
    else
    {
        struct stack_item_t *stack_copy = stack;
        while (stack_copy)
        {
            printf("%d\t",stack_copy->value);
            stack_copy = stack_copy->next;
        }
        printf("\n");
    }
}

bool is_empty(void)
{
    return(!stack);
}

int push(int n)
{
    struct stack_item_t *new_stack_element = malloc(sizeof(struct stack_item_t));
    new_stack_element->value = n;
    new_stack_element->next = stack;
    stack = new_stack_element;
    return 0;
}

int pop(void)
{
    if(is_empty())
    {
        return -1;
    }
    else
    {
        struct stack_item_t *top = stack;
        int value = top->value;
        stack=top->next;
        free(top);
        return value;
    }
}
