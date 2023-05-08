#include <stdio.h>

int main()
{
    int i, j, temp = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("%c", 'A');
            }
            else
            {
                printf(" ");
            }
            // temp = !temp;
        }
        
        printf("\n");
    }
    return 0;
}