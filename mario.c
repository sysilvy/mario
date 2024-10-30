#include <stdio.h>
#include <cs50.h>

// int get_height(void);
// void print_grid(int size);

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while(height < 1 || height > 8);


    for (int i = 1; i <= height; i++)
    {
        int space = height - i;
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

