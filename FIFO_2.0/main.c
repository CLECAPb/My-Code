#include <stdio.h>
#include <stdlib.h>
int main()
{
    push(12);
    push(34);
    push(65);
    push(1055);
    push(12);
    push(34);
    push(65);
    push(1055);
    push(65);
    push(1055);
    pop();
    pop();
    push(12);
    show();
    printf("\n");
    ShowNullRight();
    return 0;
}
