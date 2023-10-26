#include "stack.h"
#include "stdbool.h"
#include <stdio.h>
#define STACK_MAX_SIZE 10
int stack[STACK_MAX_SIZE];
int PlaceInStack = 0;
void show(void)
{
    for(int i = 0; i < STACK_MAX_SIZE; i++)
    {
        printf("%d ",stack[i]);
    }
}

int push(int n)
{
    if(stack[PlaceInStack] != 0)
    {
        return -1;
    }
    else if (stack[PlaceInStack] == 0)
    {
        stack[PlaceInStack] = n;
        PlaceInStack++;
        if(PlaceInStack == STACK_MAX_SIZE) PlaceInStack = 0;
        return 0;
    }
}

int pop(void)
{
    if(PlaceInStack == 0) PlaceInStack = STACK_MAX_SIZE - 1;
    else PlaceInStack--;
    int ChargedNumber = stack[PlaceInStack];
    stack[PlaceInStack] = 0;
    return ChargedNumber;
}

bool is_empty(void)
{
    for(int i = 0; i < STACK_MAX_SIZE; i++) {
        if(stack[i] != 0) {
           return false;
        }
    }
    return true;
}

bool is_full(void)
{
    int KolvoNum = 0;
     for(int i = 0; i < STACK_MAX_SIZE; i++) {
        if(stack[i] != 0) KolvoNum++;
        if(KolvoNum == STACK_MAX_SIZE - 1) return true;
    }
    return false;
}
