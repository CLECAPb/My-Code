#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int stack[];
int top = -1;
void show(void)
{
    for(int i = 0; i < top+1;i++) printf("%4d",stack[i]);
}

int push(int n)
{
    stack[++top] = n;
}

bool is_empty(void)
{
    if(stack[0] == '\0') return 1;
    else return 0;
}

int pop(void)
{
    if(is_empty() == 0)
    {
        int number = stack[top];
        stack[top--] = '\0';
        return number;
    }
    else return -1;
}
