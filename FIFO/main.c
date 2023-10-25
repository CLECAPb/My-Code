#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "stdbool.h"
int main()
{
    bool EMPTY = is_empty();
    push(12);
    pop();
    push(45);
    show();
    push(123);
    show();
    pop();
    bool FULL = is_full();
    show(); printf("\n%hu %hu",EMPTY, FULL);
    return 0;
}
