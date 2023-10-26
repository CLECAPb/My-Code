#include "stack.h"
#include "stdbool.h"
#include <stdio.h>
#define STACK_MAX_SIZE 10
int stack[STACK_MAX_SIZE];
int PlaceInStack = 0;
int FirstNumber = 0;
void ShowNullRight(void) //функция для вывода стэка без нуля в начале
{
    for(int i = PlaceInStack + 1; ; i++)
    {
        if(i == STACK_MAX_SIZE - 1) i = 0;
        printf("%d ",stack[i]);
        if(i==PlaceInStack) break;
    }
}

void show(void)
{
    for(int i = 0; i < STACK_MAX_SIZE; i++)
    {
        printf("%d ",stack[i]);
    }
}

int push(int n)
{
    if(stack[PlaceInStack] != 0) return -1;
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
    stack[FirstNumber++] = 0;
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
        if(KolvoNum == STACK_MAX_SIZE) return true;
    }
    return false;
}
