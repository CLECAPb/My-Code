#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int stack[];
int top = -1;
int bottom = -1;
void show(void)
{
    for(int i = bottom + 1; i < top + 1;i++) printf("%4d",stack[i]);
}

int push(int n)
{
    stack[++top] = n;
}

bool is_empty(void)
{
    if(stack[bottom] == '\0') return true;
    else return false;
}

int pop(void)
{
    if(is_empty() != false)
    {
        int number = stack[bottom];
        stack[bottom] = '\0';
        bottom++;
        return number;
    }
    else return -1;
}
