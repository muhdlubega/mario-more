#include <cs50.h>
#include <stdio.h>

int main(void)
{
// get integer between 1 to 8, or program repeats
    int n;
    do
    {
        n = get_int("Height:");
    }
    while (n > 8 || n < 1);
    //make n number of rows
    for (int i = 0; i < n; i++)
    {
        //make left-aligned empty space
        for (int a = n - 1; a > i; a = a - 1)
        {
            printf(" ");
        }
        //make first right-aligned '#' stack
        for (int b = -1; b < i; b++)
        {
            printf("#");
        }
        printf("  ");
        //make second left-aligned '#' stack
        for (int c = -1; c < i; c++)
        {
            printf("#");
        }
        printf("\n");
    }
}