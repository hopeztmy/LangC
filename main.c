#include<stdio.h>

int main(void)
{
    printf("Welcome to C Programming!\n");

    int x = 10;
    int y = x * x;
    int z = x + y;
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    int price = 500;
    printf("%.1f\n", price * 1.1);
    return 0;
}