#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "stdbool.h"
int main()
{
    bool EMPTY = is_empty();
    push(12);
    push(24);
    push(149);
    push(345);
    push(24);
    push(149);
    push(24);
    push(149);
    push(456);
    push(24);
    push(149);
    pop();
    show(); printf("\n");
    push(123);
    bool FULL = is_full();
    show(); printf("\n%hu %hu",EMPTY, FULL);
    return 0;
}
