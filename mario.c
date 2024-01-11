#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int height, i ,j, s;
    do
    {
        height = get_int ("Height: ");
    }
    while (height<1||height>8);

    for (i=0;i<height;i++)
    {
        for(s=0;s<height-i-1;s++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
