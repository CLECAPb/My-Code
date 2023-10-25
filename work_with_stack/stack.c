#include "stack.h"
#include "stdbool.h"
#include <stdio.h>
#define STACK_MAX_SIZE 10
int stack[STACK_MAX_SIZE];
void show(void)
{
    for(int i = 0; i < STACK_MAX_SIZE; i++)
    {
        printf("%d ",stack[i]);
    }
}

int push(int n)
{
    if(stack[STACK_MAX_SIZE-1] != NULL){
        return -1;
    }
    else
    {
        for(int i = STACK_MAX_SIZE;i > 0;i--){
            stack[i] = stack[i-1];
        }
        stack[0] = n;
        return 0;
    }
}

int pop(void)
{
    int charged_number = stack[0];
    if(stack[0] == NULL){
        return -1;
    }
    else
    {
        for(int i = 0; i < STACK_MAX_SIZE; i++){
            stack[i] = stack[i+1];
        }
        return charged_number;
    }
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
     for(int i = 0; i < STACK_MAX_SIZE; i++) {
        if(stack[i] != 0) {
           return true;
        }
    }
    return false;
}
