#include <stdio.h>

int check_Prime(int num)
{
    int flag = 1;
    for (int j = 2; j * j <= num; j++)
    {
        if (num % j == 0)
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

int main()
{
    int k, cnt = 0;
    for (int i = 101; i <= 200; i++)
    {
        if (check_Prime(i))
        {
            printf("%-4d", i);
            cnt++;
        }

        if (cnt % 10 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}