#include <stdio.h>
#define ROW 14
#define NUM 14

int *sorting(int *numbers_mass)
{
    int temp;
    for (int i = 0; i < ROW - 1; i++) {
        for (int j = 0; j < ROW - i - 1; j++) {
            if (numbers_mass[j] > numbers_mass[j + 1]) {
                temp = numbers_mass[j];
                numbers_mass[j] = numbers_mass[j + 1];
                numbers_mass[j + 1] = temp;
            }
        }
    }
    return numbers_mass;
}
int search_leon(int *mass)
{
    int x1 = 0, x2 = ROW-1, x; //x1 - левая координата; x2 - правая координта; x - переменная для поиска места где расположено число NUM
    int *sort_mass = sorting(mass);

    if(sort_mass[x1] == NUM) x = x1;
    else if(sort_mass[x2] == NUM) x = x2;
    else
    {
        x = (x1 + x2) / 2;
        while(sort_mass[x] != NUM)
        {
            x = (x1 + x2) / 2;
            if(sort_mass[x] > NUM) x2 = x;
            else if(sort_mass[x] < NUM) x1 = x;
        }
    }
    printf("Number %d is on %d \n",NUM, x+1);
    return x;
}

int output_mass(int *mass)
{
    int j = 0;
    while(j < ROW) {
            printf("%3d ", mass[j]);
            j++;
    }
    printf("\n");
}
int main()
{
    int arr[ROW] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    output_mass(arr);
    search_leon(arr);
    sorting(arr);
    output_mass(arr);
    search_leon(arr);
    return 0;
}
