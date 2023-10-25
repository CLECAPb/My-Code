#include "stack.h"
#include "stdbool.h"
#include <stdio.h>
#define STACK_MAX_SIZE 3
int stack[STACK_MAX_SIZE];
int place_in_stack = 0; //переменная для нахождения точки в которую можно поставить число
void show(void)
{
    for(int i = STACK_MAX_SIZE; i > 0; i--)
    {
        printf("%4d ",stack[i-1]);
    }
    printf("\n");
}

int push(int n)
{
    if(stack[STACK_MAX_SIZE-1] != NULL){
        return -1;
    }
    else
    {
        stack[place_in_stack] = n; place_in_stack++;
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
            if(i == STACK_MAX_SIZE - 1) stack[STACK_MAX_SIZE-1] = 0;
            else stack[i] = stack[i+1];
        }
        place_in_stack--;
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
    int i = 0;
    for(int i = 0; i < STACK_MAX_SIZE; i++) {
        if(stack[i] != 0) {
           i++;
        }
    }
    if(i == 10) return true;
    else return false;
}
