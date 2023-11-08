#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include <stdbool.h>

int main()
{
    show();
    push(5);
    show();
    push(10);
    show();
    pop();
    show();
    int empty = is_empty();
    printf("%d",empty);
    return 0;
}
