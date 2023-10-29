#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "stdbool.h"
int main()
{
    for(int i = 0; i <= 0; i++) push(i);
    int j = pop();
    show();
    int i = is_empty();
    printf("\n%d %d",i,j);
    return 0;
}
