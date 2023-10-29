#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    for(int i = 1; i < 6; i++) push(i);
    int j = pop();
    show();
    int i = is_empty();
    printf("\n%d %d",i,j);
    return 0;
}
